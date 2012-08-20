/* Copyright (C) 2012 Evan Ochsner
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with with program; see the file COPYING. If not, write to the
 *  Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 *  MA  02111-1307  USA
 */

#include  <lal/LALSimInspiralWaveformFlags.h>

/**
 * Struct containing several enumerated flags that control specialized behavior
 * for some waveform approximants.
 *
 * Users: Access this struct only through the Create/Destroy/Set/Get/IsDefault
 * functions declared in this file.
 *
 * Developers: Do not add anything but enumerated flags to this struct. Avoid
 * adding extra flags whenever possible.
 */
struct tagLALSimInspiralWaveformFlags
{
    LALSimInspiralInteraction interactionChoice; /**< Flag to control spin/tidal effects */
    LALSimInspiralFrameAxis axisChoice; /**< Flag to set frame z-axis convention */
    LALSimInspiralModesChoice modesChoice; /**< Flag to control which modes are included in IMR models */
};

/**
 * Create a new LALSimInspiralWaveformFlags struct 
 * with all flags set to their default values.
 * 
 * Remember to destroy the struct when you are done with it.
 */
LALSimInspiralWaveformFlags *XLALSimInspiralCreateWaveformFlags(void)
{
    LALSimInspiralWaveformFlags *waveFlags;
    /* Allocate memory for the waveform flags */
    waveFlags = XLALMalloc( sizeof(*waveFlags) );
    if( !waveFlags )
    {
        XLALFree(waveFlags);
        XLAL_ERROR_NULL(XLAL_ENOMEM);
    }

    /* Set all flags to their default values */
    XLALSimInspiralSetInteraction(waveFlags,
            LAL_SIM_INSPIRAL_INTERACTION_DEFAULT);
    XLALSimInspiralSetFrameAxis(waveFlags,
            LAL_SIM_INSPIRAL_FRAME_AXIS_DEFAULT);
    XLALSimInspiralSetModesChoice(waveFlags,
            LAL_SIM_INSPIRAL_MODES_CHOICE_DEFAULT);

    return waveFlags;
}

/**
 * Destroy a LALSimInspiralWaveformFlags struct.
 */
void XLALSimInspiralDestroyWaveformFlags(
        LALSimInspiralWaveformFlags *waveFlags
        )
{
    if( waveFlags )
        XLALFree(waveFlags);
    return;
}

/**
 * Returns true if waveFlags is non-NULL and all of its fields have default
 * value; returns false otherwise.
 */
bool XLALSimInspiralWaveformFlagsIsDefault(
        LALSimInspiralWaveformFlags *waveFlags
        )
{
    /* Check every field of WaveformFlags, each returns 1/0 for true/false.
     * Return true iff waveFlags is non-NULL and all checks are true. */
    return !waveFlags || (
        XLALSimInspiralInteractionIsDefault(waveFlags->interactionChoice) &&
        XLALSimInspiralFrameAxisIsDefault(waveFlags->axisChoice) &&
        XLALSimInspiralModesChoiceIsDefault(waveFlags->modesChoice));
}


/**
 * Set the LALSimInspiralInteraction within a LALSimInspiralWaveformFlags struct
 */
void XLALSimInspiralSetInteraction(
        LALSimInspiralWaveformFlags *waveFlags, /**< Struct whose flag will be set */

        LALSimInspiralInteraction interactionChoice /**< value to set flag to */
        )
{
    waveFlags->interactionChoice = interactionChoice;
    return;
}

/**
 * Get the LALSimInspiralInteraction within a LALSimInspiralWaveformFlags struct,
 * or LAL_SIM_INSPIRAL_INTERACTION_DEFAULT if waveFlags is NULL
 */
LALSimInspiralInteraction XLALSimInspiralGetInteraction(
        LALSimInspiralWaveformFlags *waveFlags
        )
{
    if ( waveFlags )
        return waveFlags->interactionChoice;
    else
        return LAL_SIM_INSPIRAL_INTERACTION_DEFAULT;
}

/**
 * Returns true if LALSimInspiralInteraction has default value
 * returns false otherwise
 */
bool XLALSimInspiralInteractionIsDefault(
        LALSimInspiralInteraction interactionChoice
        )
{
    if( interactionChoice == LAL_SIM_INSPIRAL_INTERACTION_DEFAULT )
        return true;
    else 
        return false;
}

/**
 * Set the LALSimInspiralFrameAxis within a LALSimInspiralWaveformFlags struct
 */
void XLALSimInspiralSetFrameAxis(
        LALSimInspiralWaveformFlags *waveFlags, /**< Struct whose flag will be set */
        LALSimInspiralFrameAxis axisChoice /**< value to set flag to */
        )
{
    waveFlags->axisChoice = axisChoice;
    return;
}

/**
 * Get the LALSimInspiralFrameAxis within a LALSimInspiralWaveformFlags struct,
 * or LAL_SIM_INSPIRAL_FRAME_AXIS_DEFAULT if waveFlags is NULL
 */
LALSimInspiralFrameAxis XLALSimInspiralGetFrameAxis(
        LALSimInspiralWaveformFlags *waveFlags
        )
{
    if ( waveFlags )
        return waveFlags->axisChoice;
    else
        return LAL_SIM_INSPIRAL_FRAME_AXIS_DEFAULT;
}

/**
 * Returns true if LALSimInspiralFrameAxis has default value
 * returns false otherwise
 */
bool XLALSimInspiralFrameAxisIsDefault(
        LALSimInspiralFrameAxis axisChoice
        )
{
    if( axisChoice == LAL_SIM_INSPIRAL_FRAME_AXIS_DEFAULT )
        return true;
    else 
        return false;
}

/**
 * Set the LALSimInspiralModesChoice within a LALSimInspiralWaveformFlags struct
 */
void XLALSimInspiralSetModesChoice(
        LALSimInspiralWaveformFlags *waveFlags, /**< Struct whose flag will be set */
        LALSimInspiralModesChoice modesChoice /**< value to set flag to */
        )
{
    waveFlags->modesChoice = modesChoice;
    return;
}

/**
 * Get the LALSimInspiralModesChoice within a LALSimInspiralWaveformFlags struct,
 * or LAL_SIM_INSPIRAL_MODES_CHOICE_DEFAULT if waveFlags is NULL
 */
LALSimInspiralModesChoice XLALSimInspiralGetModesChoice(
        LALSimInspiralWaveformFlags *waveFlags
        )
{
    if ( waveFlags )
        return waveFlags->modesChoice;
    else
        return LAL_SIM_INSPIRAL_MODES_CHOICE_DEFAULT;
}

/**
 * Returns true if LALSimInspiralModesChoice has default value
 * returns false otherwise
 */
bool XLALSimInspiralModesChoiceIsDefault(
        LALSimInspiralModesChoice modesChoice
        )
{
    if( modesChoice == LAL_SIM_INSPIRAL_MODES_CHOICE_DEFAULT )
        return true;
    else 
        return false;
}

