/* Inverse of sensing function */

#define CinvDirectOrder 10
const REAL8   CinvDirectCoefs[CinvDirectOrder]={-7.893075023278796e-13,     6.759754673033079e-12,    -2.578796302815972e-11,
						5.751628660780782e-11,    -8.264906033780873e-11,     7.934897974376852e-11,
						-5.089683476358124e-11,     2.103208909804957e-11,    -5.080539630553266e-12, 
						5.465951395350035e-13};

#define CinvRecursOrder 10
const REAL8   CinvRecursCoefs[CinvRecursOrder]={1.000000000000000e+00,    -6.502197479586399e+00,     1.935372796880135e+01,
						-3.459297490160265e+01,     4.070748004036862e+01,    -3.217563008237806e+01,
						1.641471545244304e+01,    -4.681257169018291e+00,     3.896962149825264e-01, 
						8.777533064018379e-02};

/*************** Servo -- 13 digital filters ********************/

#define ServoGain 9.185412547965167e-02

#define G_Dord 3 
#define G_Rord 3 
#define NGfilt 13

const REAL8 G_D[NGfilt][G_Dord]={
{1.0000000000000000e+00,  -1.993805578748465e+00,   9.938538471048380e-01},
{1.0000000000000000e+00, -1.9585398456183600e+00, 9.5868388856821996e-01},
{1.0000000000000000e+00, 2.0000000000000000e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 2.0000000000000000e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 2.0000000000000000e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9936654845851400e+00, 9.9371145678219996e-01},
{1.0000000000000000e+00, -1.9876536200348900e+00, 9.8780329786267995e-01},
{1.0000000000000000e+00, -9.6236746291484998e-01, 0.0000000000000000e+00},
{1.0000000000000000e+00, -1.9996743468515801e+00, 9.9969520503276998e-01},
{1.0000000000000000e+00, -1.9996205658617101e+00, 9.9966528964278001e-01},
{1.0000000000000000e+00, -1.9996148106245299e+00, 9.9966010024130003e-01},
{1.0000000000000000e+00, -1.9996152090096799e+00, 9.9966106815876998e-01},
{1.0000000000000000e+00, -1.9984352014152500e+00, 9.9862145886779996e-01},
 };

const REAL8 G_R[NGfilt][G_Rord]={
{1.0000000000000000e+00, -1.9987796692903781e+00, 9.9878004159213785e-01},
{1.0000000000000000e+00, -1.5910044829201999e+00, 7.1562296861661001e-01},
{1.0000000000000000e+00, -4.3134450881079998e-02, 1.7190180171423999e-01},
{1.0000000000000000e+00, -1.9968983805177800e+00, 9.9690428842863998e-01},
{1.0000000000000000e+00, -1.9986956767303701e+00, 9.9871655536357995e-01},
{1.0000000000000000e+00, 5.0657862426255995e-01, 2.1730740155506001e-01},
{1.0000000000000000e+00, 5.0657862426255995e-01, 2.1730740155506001e-01},
{1.0000000000000000e+00, -9.2609880395027000e-01, 0.0000000000000000e+00},
{1.0000000000000000e+00, -1.9999694988543499e+00, 9.9999036011421005e-01},
{1.0000000000000000e+00, -1.9999446827831999e+00, 9.9998941381352002e-01},
{1.0000000000000000e+00, -1.9999207082793000e+00, 9.9996600482440001e-01},
{1.0000000000000000e+00, -1.9999434135987799e+00, 9.9998928027491996e-01},
{1.0000000000000000e+00, -1.9996756872489201e+00, 9.9986206031679004e-01}
};


/***************** Actuation function ***************/

/* analog part: 13th order filter */

#define A_0_Dord 14

const REAL8 A_0_D[A_0_Dord] = {-8.432452425850172e-24,    -1.421344579132765e-22,    -1.247094445348160e-21,    -6.717103671259469e-21,    
			       -2.455321330528966e-20,    -6.469692743274674e-20,    -1.265822787578726e-19,    -1.857007759078219e-19,
			       -2.035883178835884e-19,    -1.643517063181966e-19,    -9.485718307310122e-20,    -3.705980267193711e-20,    
			       -8.787485262792938e-21,    -9.555547205437892e-22};

#define A_0_Rord 14
const REAL8 A_0_R[A_0_Rord] = {1.000000000000000e+00,     1.026680248709319e+00,    -3.214724576107042e-01,    -1.055638213781589e+00,    
			      -1.443394710781333e+00,    -5.328472125537893e-01,     1.962585938590361e-01,     1.180340424987293e-01,
			       3.590725277806569e-01,     3.325330744170250e-01,     2.175401972867406e-01,     8.664725363229336e-02,
			       1.510653597249981e-02,     1.499997941641813e-03}; 
#define A_DW_Ord 10
const REAL8 A_DW_D[A_DW_Ord] = {7.824906788830731e-02,    -5.285121638339773e-01,     1.451214881018607e+00,    -1.929746686300085e+00,     
				8.404611739811396e-01,     1.087849197628832e+00,    -1.929836021592406e+00,     1.309863078010642e+00,
			       -4.400891012955579e-01,     6.054657449467849e-02};

const REAL8 A_DW_R[A_DW_Ord] = {1.000000000000000e+00,    -6.073767034270988e+00,     1.523957611023318e+01,    -1.930265863060717e+01,    
				1.018525991755804e+01,     4.395332904906130e+00,    -1.063494609682938e+01,     7.254499868368715e+00,
			       -2.382737367300887e+00,     3.194403279425265e-01}; 

#define A_ADW_Ord 9
const REAL8 A_ADW_D[A_ADW_Ord] = {1.274652520952301e+01,    -8.826627084945086e+01,     2.688138656104312e+02,    -4.713679505223081e+02,    
				  5.217157612848323e+02,    -3.739466413614247e+02,     1.697058599392788e+02,    -4.458658771349871e+01,
				  5.185438402618260e+00};

const REAL8 A_ADW_R[A_ADW_Ord] = {1.000000000000000e+00,    -7.762490773392459e+00,     2.635782975865293e+01,    -5.113346629024736e+01,
				  6.198710443090316e+01,    -4.808317199173143e+01,     2.330641216877640e+01,    -6.453937772762127e+00,
				  7.817204698020678e-01}; 



/* Digital part: 16 2nd order filters the x-arm; 15 2nd order filters for the y-arm */

#define A_digital_Dord 3 
#define A_digital_Rord 3 

#define NAXfilt 16
#define NAYfilt 15

#define AXGain 8.666106103188622e-01
#define AYGain 8.688504411658857e-01

const REAL8 AX_D[NAXfilt][A_digital_Dord]={
{1.0000000000000000e+00, 1.6455904993725601e+00, 9.9999988633101999e-01},
{1.0000000000000000e+00, 1.8458454109193601e+00, 9.9999992300200002e-01},
{1.0000000000000000e+00, -1.9826783316427601e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9826538853672599e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9826093818057100e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9825647645647200e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9825401587133100e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9823015535987001e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9822836539450599e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9822573907478001e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9822394466284401e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6454772482064199e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6467579614688099e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6486664219095399e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6499375781328500e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9306804863383700e+00, 9.9994781519425002e-01}
};

const REAL8 AX_R[NAXfilt][A_digital_Rord]={
{1.0000000000000000e+00, 1.6362908167685299e+00, 9.8869733921612002e-01},
{1.0000000000000000e+00, 1.8387664146958400e+00, 9.9232972926951002e-01},
{1.0000000000000000e+00, -1.9821492013343900e+00, 9.9937955255054001e-01},
{1.0000000000000000e+00, -1.9826280662005400e+00, 9.9988698713928004e-01},
{1.0000000000000000e+00, -1.9805499529648700e+00, 9.9792250671287996e-01},
{1.0000000000000000e+00, -1.9823648067580599e+00, 9.9988613502142998e-01},
{1.0000000000000000e+00, -1.9818325696570900e+00, 9.9937400207481997e-01},
{1.0000000000000000e+00, -1.9815706565415101e+00, 9.9920403322877005e-01},
{1.0000000000000000e+00, -1.9822293351781299e+00, 9.9986763133059997e-01},
{1.0000000000000000e+00, -1.9813881647341500e+00, 9.9920003356290998e-01},
{1.0000000000000000e+00, -1.9820482050946799e+00, 9.9986695895504996e-01},
{1.0000000000000000e+00, 1.6295288180582701e+00, 9.8809243508778000e-01},
{1.0000000000000000e+00, 1.6463060620644800e+00, 9.8834275140284999e-01},
{1.0000000000000000e+00, 1.6406793155763599e+00, 9.9864568824146005e-01},
{1.0000000000000000e+00, 1.6524434534215700e+00, 9.9866593351106003e-01},
{1.0000000000000000e+00, -1.9257061026932401e+00, 9.9479496480113005e-01}
};



const REAL8 AY_D[NAYfilt][A_digital_Dord]={
{1.0000000000000000e+00, 1.6489615265071400e+00, 9.9999988682061003e-01},
{1.0000000000000000e+00, 1.8439203581033301e+00, 9.9999992254211001e-01},
{1.0000000000000000e+00, -1.9826783316427601e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9826538853672599e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9826093818057100e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9825647645647200e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9825401587133100e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9823015535987001e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9822836539450599e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9822573907478001e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, -1.9822394466284401e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6454772482064199e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6467579614688099e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6486664219095399e+00, 1.0000000000000000e+00},
{1.0000000000000000e+00, 1.6499375781328500e+00, 1.0000000000000000e+00}
};


const REAL8 AY_R[NAYfilt][A_digital_Rord]={
{1.0000000000000000e+00, 1.6396827047943501e+00, 9.8874574772936996e-01},
{1.0000000000000000e+00, 1.8368066711994400e+00, 9.9228409403885998e-01},
{1.0000000000000000e+00, -1.9821492013343900e+00, 9.9937955255054001e-01},
{1.0000000000000000e+00, -1.9826280662005400e+00, 9.9988698713928004e-01},
{1.0000000000000000e+00, -1.9805499529648700e+00, 9.9792250671287996e-01},
{1.0000000000000000e+00, -1.9823648067580599e+00, 9.9988613502142998e-01},
{1.0000000000000000e+00, -1.9818325696570900e+00, 9.9937400207481997e-01},
{1.0000000000000000e+00, -1.9815706565415101e+00, 9.9920403322877005e-01},
{1.0000000000000000e+00, -1.9822293351781299e+00, 9.9986763133059997e-01},
{1.0000000000000000e+00, -1.9813881647341500e+00, 9.9920003356290998e-01},
{1.0000000000000000e+00, -1.9820482050946799e+00, 9.9986695895504996e-01},
{1.0000000000000000e+00, 1.6295288180582701e+00, 9.8809243508778000e-01},
{1.0000000000000000e+00, 1.6463060620644800e+00, 9.8834275140284999e-01},
{1.0000000000000000e+00, 1.6406793155763599e+00, 9.9864568824146005e-01},
{1.0000000000000000e+00, 1.6524434534215700e+00, 9.9866593351106003e-01}
};




