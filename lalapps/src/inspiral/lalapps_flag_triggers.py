"""
flag_triggers.in - find DQ flags common to triggers

$Id $

This small utility reads in trigger files generated by the ihope daily pages,
specifically those that have not been vetoed after cat 4.  It then finds DQ
flags that were on during the time of those triggers, and ranks those flags by
the percentage of triggers covered.  

The idea is that if there are lots of loud glitches this program will suggest
flags that can be used to veto them.

usage: lalapps_flag_triggers ifo trigger_snr_threshold dir1 dir2 ...

where the dirs are ihope_daily analysis directories
"""


import os
import sys
import pickle

from optparse import OptionParser
from glue import git_version


def parse_command_line():
    """
    Parse the command line, return an options object
    """

    parser = OptionParser(
        version = "Name: %%prog\n%s" % git_version.verbose_msg,
        usage   = "%prog -v|--veto-file veto_cat [--unclustered|--thirty-ms|--sixteen-sec] [--min-snr val|--min-new-snr val] --gps-start-time start --gps-end-time end",
        description = "Extracts all daily ihope triggers in the specified time range, with specified clustering, above the specified (new) snr and reports on the DQ flags covering these triggers."
	)
    
    parser.add_option("-b", "--basedir",       metavar = "basedir",       help = "base directory for datafiles (defaults to ~cbc/ihope_daily.")
    parser.add_option("-i", "--ifo",           metavar = "ifo",           help = "ifo.")
    parser.add_option("-v", "--veto-category", metavar = "veto_category", help = "veto category to filter (0,1,2,3,4) (required).")

    parser.add_option("-u", "--unclustered",   metavar = "unclustered",           action = "store_true",    help = "Use unclustered triggers.")
    parser.add_option("-t", "--thirty-ms",     metavar = "thirty_ms_clustered",   action = "store_true",    help = "Use 30-millisec triggers.")
    parser.add_option("-x", "--sixteen-sec",   metavar = "sixteen_sec_clustered", action = "store_true",    help = "Use 16-second triggers.")

    parser.add_option("-m", "--min-snr",       metavar = "min_snr",     help = "Only examine triggers with snr above this value.")
    parser.add_option("-n", "--min-new-snr",   metavar = "min_new_snr", help = "Only examine triggers with new snr above this value.")


    # Time options
    parser.add_option("-s", "--gps-start-time", metavar = "gps_start_time", help = "Start of GPS time range")
    parser.add_option("-e", "--gps-end-time",   metavar = "gps_end_time", help = "End of GPS time range")
    
    options, others = parser.parse_args()

    if not options.ifo:
        raise ValueError, "missing required argument --ifo"

    if not options.gps_end_time:
        raise ValueError, "missing required argument --gps-end_time"
   
    if not options.gps_start_time:
        raise ValueError, "missing required argument --gps-start_time"
   
    if not options.veto_category:
        raise ValueError, "missing required argument --veto-category"
   
    if len( [x for x in (options.unclustered, options.thirty_ms, options.sixteen_sec) if x] ) != 1:
        raise ValueError, "must provide one of [--unclustered | --thirty-ms | --sixteen-sec]"

    if len( [x for x in (options.min_snr, options.min_new_snr) if x] ) != 1:
        raise ValueError, "must provide exactly one of [--min-snr | --min-new-snr]"

    return options


def get_triggers(basedir, ifo, cluster, cat, start_time, end_time, snr_func, filter_func):
    all_triggers = []
    cur_time     = start_time

    while cur_time < end_time:
        tstring  = os.popen('tconvert -f %Y%m/%Y%m%d ' + str(cur_time)).readlines()[0].strip()
        infile   = open('%s/%s/%s-%s-INSPIRAL_%s.csv'  % (basedir, tstring, ifo, cat, cluster))
        data     = [ t.split(',') for t in infile ]
        triggers = [ (int(trigger[0]), snr_func(trigger)) for trigger in data ]
        triggers = [ t for t in triggers if filter_func(t) ]

        all_triggers.extend(triggers)

        cur_time += 60 * 60 * 24

    return all_triggers

def get_snr(d):
    return float(d[3])

def get_new_snr(d, index=6.0):
    snr       = float(d[3])
    chisq     = float(d[11])
    chisq_dof = float(d[12])

    rchisq = chisq/(2 * chisq_dof - 2)
    nhigh  = 2.

    if rchisq > 1.:
        return snr / ((1. + rchisq**(index/nhigh))/2)**(1./index)
    else:
        return snr

if __name__ == '__main__':
    options = parse_command_line()
    ifo   = options.ifo
    start = int(options.gps_start_time)
    end   = int(options.gps_end_time)
    cat   = int(options.veto_category)

    basedir  = options.basedir or "/archive/home/cbc/ihope_daily"
    snrifier = (options.min_snr and get_snr) or get_new_snr
    snr_lim  = float(options.min_snr or options.min_new_snr)
    cluster  = (options.unclustered and "UNCLUSTERED") or (options.thirty_ms and "30MILLISEC_CLUSTERED") or (options.sixteen_sec and "16SEC_CLUSTERED")
    

    filter_func = lambda x: x[0] >= start and x[0] < end and x[1] >= snr_lim

    all_triggers = get_triggers(basedir, ifo, cluster, cat, start, end, snrifier, filter_func)
    num_triggers = len(all_triggers)

    print "Found %d triggers\n\n" % num_triggers

    # divide by 100 = multiply percentage by 100 below
    num_triggers = float(num_triggers)

    flags     = {}
    end_times = ' '.join([str(t[0]) for t in all_triggers])

    pipe  = os.popen('ligolw_dq_query --database --include-segments %s --in-segments-only --report %s' % (ifo, end_times))

    for line in pipe:
        flag, beforet, timet, aftert = [x for x in line.split() if x != '']
        # append the time (rather than increment a counter)
        # in case anyone later wants to see each list
        flags.setdefault(flag,set()).add(timet)

    use_percents = [(k, flags[k]) for k in flags]
    use_percents = sorted(use_percents, cmp=lambda x,y:cmp(len(y[1]),len(x[1])))

    for name, triggers in use_percents:
        print '%-45s        %.2f' % (name[3:], 100.0 * (float(len(triggers)) / num_triggers))

