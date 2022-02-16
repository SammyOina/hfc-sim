#include "rt_logging_mmi.h"
#include "pid_hfc_capi.h"
#include <math.h>
#include "pid_hfc.h"
#include "pid_hfc_private.h"
#include "pid_hfc_dt.h"
#include "sfcn_loader_c_api.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . ljdekygcqq = 0.0 ; rtX .
azqpehx540 = rtP . PIDController_InitialConditionForIntegrator ; rtX .
fcisgekmsy = rtP . PIDController_InitialConditionForFilter ; { SimStruct *
rts = ssGetSFunction ( rtS , 0 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } } void MdlStart ( void ) {
{ bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} rtB . lfvm4alwxg = rtP . gate_Value ; { char fileName [ 509 ] =
"D:\\Documents\\hfc\\hfc test.xlsx" ; CHAR16_T * fileUName =
rtwExcelLoaderGetUnicodeStringFromChars ( fileName ) ; CHAR16_T * sheetUName
= rtwExcelLoaderGetUnicodeStringFromChars ( "Sheet1" ) ; CHAR16_T *
rangeUName = rtwExcelLoaderGetUnicodeStringFromChars ( "" ) ; char
spreadsheetIOImpl [ 509 ] = "COM" ; const char * blockpath =
"pid_hfc/From Spreadsheet" ; unsigned char groundValue [ ] = { 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U } ; if ( slIsRapidAcceleratorSimulating ( ) ) {
rt_RAccelReplaceFromFilename ( blockpath , fileName ) ; } { void * fp = (
NULL ) ; const char * errMsg = ( NULL ) ; errMsg =
rtwExcelLoaderCreateInstanceWithSequenceSupport ( fileUName , sheetUName ,
rangeUName , 0 , 0 , 2 , 1 , 2 , groundValue , 0 , 0 , spreadsheetIOImpl , &
fp ) ; if ( errMsg != ( NULL ) ) { ssSetErrorStatus ( rtS , errMsg ) ; return
; } rtDW . cxqxgzg5rp . ExcelLoader = fp ; } rtwExcelLoaderFreeLabel (
fileUName ) ; rtwExcelLoaderFreeLabel ( sheetUName ) ;
rtwExcelLoaderFreeLabel ( rangeUName ) ; } rtDW . bl0zsrdfdr = 1 ; rtDW .
j44ulxfog4 = 1 ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnStart (
rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } MdlInitialize
( ) ; } void MdlOutputs ( int_T tid ) { real_T maxV ; real_T pbrucuhrhn ;
real_T tmp ; rtB . bavzijv0so = 0.0 ; rtB . bavzijv0so += rtP . TransferFcn_C
* rtX . ljdekygcqq ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . c43gr4lfcg = ( rtB . bavzijv0so >
rtP . Constant2_Value ) ; } rtB . b1rqs431h1 = rtDW . c43gr4lfcg ; } { {
const char * errMsg = ( NULL ) ; void * excelLoader = ( void * ) rtDW .
cxqxgzg5rp . ExcelLoader ; void * TempDoubleOutput = ( void * ) & rtDW .
mwnril4rhy . TempDoubleOutput ; if ( excelLoader != ( NULL ) && (
ssIsMajorTimeStep ( rtS ) || ! 0 ) ) { void * y = & rtB . daxvyr42tj ; real_T
t = ssGetTaskTime ( rtS , 0 ) ; errMsg = rtwExcelLoaderGetOutput ( &
TempDoubleOutput , excelLoader , t , ssIsMajorTimeStep ( rtS ) ) ; if (
errMsg != ( NULL ) ) { ssSetErrorStatus ( rtS , errMsg ) ; return ; } rtB .
daxvyr42tj = rtDW . mwnril4rhy . TempDoubleOutput ; } } } rtB . ivrdakrpkz =
rtB . daxvyr42tj - rtB . bavzijv0so ; rtB . gav1pd5ma3 = rtP .
PIDController_P * rtB . ivrdakrpkz ; rtB . fqkwvndle1 = rtX . azqpehx540 ;
rtB . nvztzljheb = rtP . PIDController_D * rtB . ivrdakrpkz ; rtB .
ljzmtubqwo = rtX . fcisgekmsy ; rtB . akyj4jonda = rtB . nvztzljheb - rtB .
ljzmtubqwo ; rtB . lzgsyascic = rtP . PIDController_N * rtB . akyj4jonda ;
rtB . nmri2lmpfm = ( rtB . gav1pd5ma3 + rtB . fqkwvndle1 ) + rtB . lzgsyascic
; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . buulypwczt = rtB . nmri2lmpfm >=
rtP . Saturation3_UpperSat ? 1 : rtB . nmri2lmpfm > rtP .
Saturation3_LowerSat ? 0 : - 1 ; } rtB . ekul1otefy = rtDW . buulypwczt == 1
? rtP . Saturation3_UpperSat : rtDW . buulypwczt == - 1 ? rtP .
Saturation3_LowerSat : rtB . nmri2lmpfm ; if ( rtP .
Constant1_Value_jwzwi0xdlm > rtP . Switch1_Threshold ) { rtB . lhtnm5lwwx =
rtB . ekul1otefy ; } else { rtB . lhtnm5lwwx = 300000.0 * rtB . bavzijv0so *
8.3145 * rtB . jolm4mpqdu / ( 192970.0 * rtB . d1b4tb0oga * 101325.0 * rtB .
ekul1otefy * rtB . eskban3zwt ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
bobo4src3m = rtB . lhtnm5lwwx >= rtP . Saturation8_UpperSat ? 1 : rtB .
lhtnm5lwwx > rtP . Saturation8_LowerSat ? 0 : - 1 ; } rtB . g1r5stuak1 = rtDW
. bobo4src3m == 1 ? rtP . Saturation8_UpperSat : rtDW . bobo4src3m == - 1 ?
rtP . Saturation8_LowerSat : rtB . lhtnm5lwwx ; if ( rtP .
Constant2_Value_lcqxxdekmv > rtP . Switch2_Threshold ) { rtB . ob3xvrv14j =
rtB . mw20dncod2 ; } else { rtB . ob3xvrv14j = 300000.0 * rtB . bavzijv0so *
8.3145 * rtB . jolm4mpqdu / ( 385940.0 * rtB . gchfzymay5 * 101325.0 * rtB .
ckwkubvaz1 * rtB . cajozp21sm ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ciqoxqno3n = rtB . ob3xvrv14j >= rtP . Saturation4_UpperSat ? 1 : rtB .
ob3xvrv14j > rtP . Saturation4_LowerSat ? 0 : - 1 ; } rtB . btrx0xj1zo = rtDW
. ciqoxqno3n == 1 ? rtP . Saturation4_UpperSat : rtDW . ciqoxqno3n == - 1 ?
rtP . Saturation4_LowerSat : rtB . ob3xvrv14j ; rtB . dqmbk4jy2s = rtB .
jolm4mpqdu ; rtB . llkknoylr5 = ( 1.0 - rtB . g1r5stuak1 ) * rtB . eskban3zwt
* rtB . d1b4tb0oga ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . e2av4brvjw =
rtB . llkknoylr5 >= rtP . Saturation1_UpperSat ? 1 : rtB . llkknoylr5 > rtP .
Saturation1_LowerSat ? 0 : - 1 ; } rtB . efwiiajxhv = rtDW . e2av4brvjw == 1
? rtP . Saturation1_UpperSat : rtDW . e2av4brvjw == - 1 ? rtP .
Saturation1_LowerSat : rtB . llkknoylr5 ; rtB . c0i2lpksv0 = ( 1.0 - rtB .
btrx0xj1zo ) * rtB . cajozp21sm * rtB . gchfzymay5 ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . fy2pcwaiq4 = rtB . c0i2lpksv0 >= rtP .
Saturation4_UpperSat_akmwgxb01z ? 1 : rtB . c0i2lpksv0 > rtP .
Saturation4_LowerSat_ij4zyjj5on ? 0 : - 1 ; } rtB . ebodj1thau = rtDW .
fy2pcwaiq4 == 1 ? rtP . Saturation4_UpperSat_akmwgxb01z : rtDW . fy2pcwaiq4
== - 1 ? rtP . Saturation4_LowerSat_ij4zyjj5on : rtB . c0i2lpksv0 ; rtB .
pmuzvfqj2o = ( 2.0 * rtB . cajozp21sm * rtB . btrx0xj1zo + 0.01 ) * rtB .
gchfzymay5 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ijyrr5pcnk = rtB .
pmuzvfqj2o >= rtP . Saturation5_UpperSat ? 1 : rtB . pmuzvfqj2o > rtP .
Saturation5_LowerSat ? 0 : - 1 ; rtDW . hnqcsmtgzu = ( rtB . dqmbk4jy2s >=
rtP . Switch_Threshold ) ; } rtB . jedtphj44b = rtDW . ijyrr5pcnk == 1 ? rtP
. Saturation5_UpperSat : rtDW . ijyrr5pcnk == - 1 ? rtP .
Saturation5_LowerSat : rtB . pmuzvfqj2o ; if ( rtDW . hnqcsmtgzu ) { rtB .
jn0audc40e = rtB . jedtphj44b ; } else { rtB . jn0audc40e = rtP .
Constant_Value_bz5fk4zjsw ; } rtB . g2hfsznaof = ( rtB . efwiiajxhv *
101325.0 + rtB . ebodj1thau * 101325.0 ) / ( 8.3145 * rtB . dqmbk4jy2s ) * (
2.6629860000000003E-18 * rtB . dqmbk4jy2s ) * muDoubleScalarExp ( -
132167.06133092922 / ( 8.3145 * rtB . dqmbk4jy2s ) ) / 6.626e-34 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . fp1fv0c3dn = ( rtB . bavzijv0so < rtB . g2hfsznaof ) ; } rtB .
bgqx5dwycb = rtDW . fp1fv0c3dn ; } if ( rtB . b1rqs431h1 ) { rtB . dqw3uf1b44
= rtP . Constant2_Value ; } else { if ( rtB . bgqx5dwycb ) { rtB . c0pcwbtojc
= rtB . g2hfsznaof ; } else { rtB . c0pcwbtojc = rtB . bavzijv0so ; } rtB .
dqw3uf1b44 = rtB . c0pcwbtojc ; } pbrucuhrhn = 8.3145 * rtB . dqmbk4jy2s /
9002.0939656527516 ; maxV = rtB . dqw3uf1b44 ; if ( ssIsMajorTimeStep ( rtS )
) { if ( rtDW . bl0zsrdfdr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
bl0zsrdfdr = 0 ; } } else if ( rtB . dqw3uf1b44 < 0.0 ) { maxV = 0.0 ; rtDW .
bl0zsrdfdr = 1 ; } tmp = rtB . g2hfsznaof ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( rtDW . bl0zsrdfdr != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW
. bl0zsrdfdr = 0 ; } } else if ( rtB . g2hfsznaof < 0.0 ) { tmp = 0.0 ; rtDW
. bl0zsrdfdr = 1 ; } pbrucuhrhn = - 5.0 * pbrucuhrhn * muDoubleScalarLog (
maxV ) + 5.0 * pbrucuhrhn * muDoubleScalarLog ( tmp ) ; rtB . iqef1c31zx =
0.0 ; rtB . iqef1c31zx += rtP . Celldynamic_D * pbrucuhrhn ; if ( rtB .
ebodj1thau < 0.0 ) { tmp = - muDoubleScalarSqrt ( - rtB . ebodj1thau ) ; }
else { tmp = muDoubleScalarSqrt ( rtB . ebodj1thau ) ; } maxV = rtB .
efwiiajxhv * tmp / rtB . jn0audc40e ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
rtDW . j44ulxfog4 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
j44ulxfog4 = 0 ; } } else if ( maxV < 0.0 ) { maxV = 0.0 ; rtDW . j44ulxfog4
= 1 ; } pbrucuhrhn = ( ( rtB . dqmbk4jy2s - 298.15 ) * -
0.00023024304296004561 + 1.229 ) + 8.3145 * rtB . dqmbk4jy2s / 192970.0 *
muDoubleScalarLog ( maxV ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ci5q0cjvne = ( rtB . ob3xvrv14j >
rtP . CompareToConstant_const ) ; } rtB . oc0v4h1y5j = rtDW . ci5q0cjvne ; }
pbrucuhrhn = ( pbrucuhrhn - ( rtB . ob3xvrv14j - 0.045617059572783905 ) * 0.0
/ - 2.4447288478508087 ) * rtB . oc0v4h1y5j + ( 1.0 - rtB . oc0v4h1y5j ) *
pbrucuhrhn ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . l2s1k43lyk = rtB .
bavzijv0so >= rtP . Saturation1_UpperSat_ed1q0y3kri ? 1 : rtB . bavzijv0so >
rtP . Saturation1_LowerSat_ofmajn4n44 ? 0 : - 1 ; } rtB . bprv4o1etg = rtDW .
l2s1k43lyk == 1 ? rtP . Saturation1_UpperSat_ed1q0y3kri : rtDW . l2s1k43lyk
== - 1 ? rtP . Saturation1_LowerSat_ofmajn4n44 : rtB . bavzijv0so ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . d2axjvvxsl = ( rtB . bprv4o1etg > rtP . CompareToConstant2_const ) ; }
rtB . ay2y0ocfyb = rtDW . d2axjvvxsl ; } pbrucuhrhn = muDoubleScalarCos ( (
rtB . bprv4o1etg / 225.0 - 1.0 ) * 7.8539816339744828 ) * pbrucuhrhn * rtB .
ay2y0ocfyb + ( 1.0 - rtB . ay2y0ocfyb ) * pbrucuhrhn ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . nvonx4yx5b
= ( rtB . bavzijv0so > rtP . Constant_Value ) ; } rtB . oojwlcphqb = rtDW .
nvonx4yx5b ; } rtB . d3quvi1chz [ 0 ] = ( real_T ) rtB . oojwlcphqb * rtB .
ob3xvrv14j ; rtB . d3quvi1chz [ 1 ] = ( real_T ) rtB . oojwlcphqb * rtB .
lhtnm5lwwx ; rtB . ine5zv1zjj [ 0 ] = rtP . Gain2_Gain [ 0 ] * rtB .
d3quvi1chz [ 0 ] ; rtB . ine5zv1zjj [ 1 ] = rtP . Gain2_Gain [ 1 ] * rtB .
d3quvi1chz [ 1 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { rtB . o2r0cagjuy = rtB
. ine5zv1zjj [ 0 ] ; rtDW . b0xiuk0xhi = 0 ; if ( rtB . ine5zv1zjj [ 1 ] >
rtB . ine5zv1zjj [ 0 ] ) { rtB . o2r0cagjuy = rtB . ine5zv1zjj [ 1 ] ; rtDW .
b0xiuk0xhi = 1 ; } rtDW . axsjjkipui = rtB . o2r0cagjuy >= rtP .
Saturation2_UpperSat ? 1 : rtB . o2r0cagjuy > rtP . Saturation2_LowerSat ? 0
: - 1 ; } else { rtB . o2r0cagjuy = rtB . ine5zv1zjj [ rtDW . b0xiuk0xhi ] ;
} rtB . j3idclsmnt = rtDW . axsjjkipui == 1 ? rtP . Saturation2_UpperSat :
rtDW . axsjjkipui == - 1 ? rtP . Saturation2_LowerSat : rtB . o2r0cagjuy ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . fcdvvtdyq2 = ( rtB . j3idclsmnt > rtP . CompareToConstant3_const ) ; }
rtB . lzypmhzndc = rtDW . fcdvvtdyq2 ; } rtB . j1dd2aosj2 = (
muDoubleScalarCos ( ( rtB . j3idclsmnt - 1.0 ) * 7.8539816339744828 ) *
pbrucuhrhn * rtB . lzypmhzndc + ( 1.0 - rtB . lzypmhzndc ) * pbrucuhrhn ) *
rtP . Gain3_Gain ; rtB . b52xchwncs = rtB . iqef1c31zx + rtB . j1dd2aosj2 ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) )
{ rtDW . fjb3gfugia = ( rtB . b52xchwncs > rtP . Constant1_Value ) ; } rtB .
nokwdddffo = rtDW . fjb3gfugia ; } rtB . kvwjc41uxn = rtP . Gain1_Gain * rtB
. bavzijv0so ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . akfzl3kzqo = ( rtB . b52xchwncs <
rtB . kvwjc41uxn ) ; } rtB . ouwoht5ci4 = rtDW . akfzl3kzqo ; } if ( rtB .
nokwdddffo ) { rtB . gcuewowv5r = rtP . Constant1_Value ; } else { if ( rtB .
ouwoht5ci4 ) { rtB . mm4pldrola = rtB . kvwjc41uxn ; } else { rtB .
mm4pldrola = rtB . b52xchwncs ; } rtB . gcuewowv5r = rtB . mm4pldrola ; } {
SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnOutputs ( rts , 0 ) ; }
rtB . k5fxcufjvi = rtB . gcuewowv5r - 0.078330030087775587 * rtB . bavzijv0so
; rtB . orai4150bl = rtP . donotdeletethisgain_Gain * rtB . bmltweyfyf ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . gfvrstqzp2 [ 0 ] = rtB . d3quvi1chz [ 0
] >= rtP . Saturation_UpperSat ? 1 : rtB . d3quvi1chz [ 0 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; rtDW . gfvrstqzp2 [ 1 ] = rtB . d3quvi1chz [
1 ] >= rtP . Saturation_UpperSat ? 1 : rtB . d3quvi1chz [ 1 ] > rtP .
Saturation_LowerSat ? 0 : - 1 ; } rtB . ctcl1uvivk = 5.0 * rtB . bavzijv0so /
( ( rtDW . gfvrstqzp2 [ 1 ] == 1 ? rtP . Saturation_UpperSat : rtDW .
gfvrstqzp2 [ 1 ] == - 1 ? rtP . Saturation_LowerSat : rtB . d3quvi1chz [ 1 ]
) * 192970.0 ) * 241830.0 ; rtB . i5reyjf5xo = rtB . k5fxcufjvi * rtB .
bavzijv0so ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . nozy5m20xv = rtB .
ctcl1uvivk >= rtP . zeroavoider_UpperSat ? 1 : rtB . ctcl1uvivk > rtP .
zeroavoider_LowerSat ? 0 : - 1 ; rtDW . apsjm1y0wq = rtB . i5reyjf5xo >= rtP
. zeroavoider2_UpperSat ? 1 : rtB . i5reyjf5xo > rtP . zeroavoider2_LowerSat
? 0 : - 1 ; } rtB . l52p3jlley = rtP . PIDController_I * rtB . ivrdakrpkz ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { real_T u0 ;
if ( rtP . AirFr_Value > rtP . Saturation4_UpperSat_li4nm1wqn1 ) { rtB .
mw20dncod2 = rtP . Saturation4_UpperSat_li4nm1wqn1 ; } else if ( rtP .
AirFr_Value < rtP . Saturation4_LowerSat_fv3k33vymh ) { rtB . mw20dncod2 =
rtP . Saturation4_LowerSat_fv3k33vymh ; } else { rtB . mw20dncod2 = rtP .
AirFr_Value ; } if ( rtB . mw20dncod2 > rtP . Saturation3_UpperSat_cnnssirnow
) { rtB . ckwkubvaz1 = rtP . Saturation3_UpperSat_cnnssirnow ; } else if (
rtB . mw20dncod2 < rtP . Saturation3_LowerSat_enqjjrirxf ) { rtB . ckwkubvaz1
= rtP . Saturation3_LowerSat_enqjjrirxf ; } else { rtB . ckwkubvaz1 = rtB .
mw20dncod2 ; } u0 = rtP . Gain1_Gain_ev5b5aedsm * rtP . x_H2_Value ; if ( u0
> rtP . Saturation1_UpperSat_fbtjzsa0iv ) { rtB . eskban3zwt = rtP .
Saturation1_UpperSat_fbtjzsa0iv ; } else if ( u0 < rtP .
Saturation1_LowerSat_dr422hztx1 ) { rtB . eskban3zwt = rtP .
Saturation1_LowerSat_dr422hztx1 ; } else { rtB . eskban3zwt = u0 ; } u0 = rtP
. Gain3_Gain_a5cekjxgez * rtP . y_O2_Value ; if ( u0 > rtP .
Saturation2_UpperSat_luintzqobe ) { rtB . cajozp21sm = rtP .
Saturation2_UpperSat_luintzqobe ; } else if ( u0 < rtP .
Saturation2_LowerSat_p1pvj3bfvw ) { rtB . cajozp21sm = rtP .
Saturation2_LowerSat_p1pvj3bfvw ; } else { rtB . cajozp21sm = u0 ; } if ( rtP
. Pfuel_Value > rtP . Saturation6_UpperSat ) { rtB . d1b4tb0oga = rtP .
Saturation6_UpperSat ; } else if ( rtP . Pfuel_Value < rtP .
Saturation6_LowerSat ) { rtB . d1b4tb0oga = rtP . Saturation6_LowerSat ; }
else { rtB . d1b4tb0oga = rtP . Pfuel_Value ; } if ( rtP . PAir_Value > rtP .
Saturation7_UpperSat ) { rtB . gchfzymay5 = rtP . Saturation7_UpperSat ; }
else if ( rtP . PAir_Value < rtP . Saturation7_LowerSat ) { rtB . gchfzymay5
= rtP . Saturation7_LowerSat ; } else { rtB . gchfzymay5 = rtP . PAir_Value ;
} if ( rtP . T_Value > rtP . Saturation8_UpperSat_khsxyas1pj ) { rtB .
jolm4mpqdu = rtP . Saturation8_UpperSat_khsxyas1pj ; } else if ( rtP .
T_Value < rtP . Saturation8_LowerSat_mopr0yl3on ) { rtB . jolm4mpqdu = rtP .
Saturation8_LowerSat_mopr0yl3on ; } else { rtB . jolm4mpqdu = rtP . T_Value ;
} rtB . lfvm4alwxg = rtP . gate_Value ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ;
sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ;
} UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot * _rtXdot ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> ljdekygcqq = 0.0 ;
_rtXdot -> ljdekygcqq += rtP . TransferFcn_A * rtX . ljdekygcqq ; _rtXdot ->
ljdekygcqq += rtB . orai4150bl ; _rtXdot -> azqpehx540 = rtB . l52p3jlley ;
_rtXdot -> fcisgekmsy = rtB . lzgsyascic ; } void MdlProjection ( void ) { }
void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> pnxivloxbs = rtB .
bavzijv0so - rtP . Constant2_Value ; _rtZCSV -> oltib0kshb = rtB . nmri2lmpfm
- rtP . Saturation3_UpperSat ; _rtZCSV -> dqhsi053sd = rtB . nmri2lmpfm - rtP
. Saturation3_LowerSat ; _rtZCSV -> ifok1g33mx = rtB . lhtnm5lwwx - rtP .
Saturation8_UpperSat ; _rtZCSV -> ffqc1vkhpc = rtB . lhtnm5lwwx - rtP .
Saturation8_LowerSat ; _rtZCSV -> bxiwaw2pkv = rtB . ob3xvrv14j - rtP .
Saturation4_UpperSat ; _rtZCSV -> my0sfsu1ul = rtB . ob3xvrv14j - rtP .
Saturation4_LowerSat ; _rtZCSV -> midepjp15g = rtB . llkknoylr5 - rtP .
Saturation1_UpperSat ; _rtZCSV -> cmdpuydnlz = rtB . llkknoylr5 - rtP .
Saturation1_LowerSat ; _rtZCSV -> ci2x0u2nnh = rtB . c0i2lpksv0 - rtP .
Saturation4_UpperSat_akmwgxb01z ; _rtZCSV -> ava0ltnrge = rtB . c0i2lpksv0 -
rtP . Saturation4_LowerSat_ij4zyjj5on ; _rtZCSV -> ce2ewgh1lo = rtB .
pmuzvfqj2o - rtP . Saturation5_UpperSat ; _rtZCSV -> kknkgodjmx = rtB .
pmuzvfqj2o - rtP . Saturation5_LowerSat ; _rtZCSV -> ezecw1kcxn = rtB .
dqmbk4jy2s - rtP . Switch_Threshold ; _rtZCSV -> n3mlun3elm = rtB .
bavzijv0so - rtB . g2hfsznaof ; _rtZCSV -> i4zazq5ni3 = rtB . ob3xvrv14j -
rtP . CompareToConstant_const ; _rtZCSV -> bzo2ksynu0 = rtB . bavzijv0so -
rtP . Saturation1_UpperSat_ed1q0y3kri ; _rtZCSV -> ialldqk00b = rtB .
bavzijv0so - rtP . Saturation1_LowerSat_ofmajn4n44 ; _rtZCSV -> bmywgpnr04 =
rtB . bprv4o1etg - rtP . CompareToConstant2_const ; _rtZCSV -> cbk3lkxatd =
rtB . bavzijv0so - rtP . Constant_Value ; _rtZCSV -> jpxkdme3mx =
muDoubleScalarMax ( rtB . ine5zv1zjj [ 1 ] , rtB . ine5zv1zjj [ 0 ] ) - rtB .
ine5zv1zjj [ rtDW . b0xiuk0xhi ] ; _rtZCSV -> dva4ws03g1 = rtB . o2r0cagjuy -
rtP . Saturation2_UpperSat ; _rtZCSV -> g10eqzhgbz = rtB . o2r0cagjuy - rtP .
Saturation2_LowerSat ; _rtZCSV -> aldvt1dbge = rtB . j3idclsmnt - rtP .
CompareToConstant3_const ; _rtZCSV -> nulxn3pqg5 = rtB . b52xchwncs - rtP .
Constant1_Value ; _rtZCSV -> g0wi43ehjc = rtB . b52xchwncs - rtB . kvwjc41uxn
; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; ssSetNonsampledZCs ( rts ,
& ( ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> gywt0wmlxq [ 0 ] ) ) ;
sfcnZeroCrossings ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) )
return ; } _rtZCSV -> meis45wroc [ 0 ] = rtB . d3quvi1chz [ 0 ] - rtP .
Saturation_UpperSat ; _rtZCSV -> osqbb5155a [ 0 ] = rtB . d3quvi1chz [ 0 ] -
rtP . Saturation_LowerSat ; _rtZCSV -> meis45wroc [ 1 ] = rtB . d3quvi1chz [
1 ] - rtP . Saturation_UpperSat ; _rtZCSV -> osqbb5155a [ 1 ] = rtB .
d3quvi1chz [ 1 ] - rtP . Saturation_LowerSat ; _rtZCSV -> hhincbv2km = rtB .
ctcl1uvivk - rtP . zeroavoider_UpperSat ; _rtZCSV -> enrlgv0322 = rtB .
ctcl1uvivk - rtP . zeroavoider_LowerSat ; _rtZCSV -> oi4t3zko5j = rtB .
i5reyjf5xo - rtP . zeroavoider2_UpperSat ; _rtZCSV -> fjzju4lvw0 = rtB .
i5reyjf5xo - rtP . zeroavoider2_LowerSat ; } void MdlTerminate ( void ) { { {
void * excelLoader = ( void * ) rtDW . cxqxgzg5rp . ExcelLoader ; if (
excelLoader != ( NULL ) ) { const char * errMsg = ( NULL ) ; errMsg =
rtwExcelLoaderTerminate ( excelLoader ) ; if ( errMsg != ( NULL ) ) {
ssSetErrorStatus ( rtS , errMsg ) ; return ; } } } } { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnTerminate ( rts ) ; } } static void
mr_pid_hfc_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_pid_hfc_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_pid_hfc_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_pid_hfc_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_pid_hfc_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_pid_hfc_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_pid_hfc_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_pid_hfc_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_pid_hfc_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_pid_hfc_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_pid_hfc_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_pid_hfc_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_pid_hfc_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_pid_hfc_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_pid_hfc_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_pid_hfc_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_pid_hfc_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_pid_hfc_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 27 ] = {
"rtDW.mwnril4rhy" , "rtDW.ai1fy52fph" , "rtDW.pzweb3waei" , "rtDW.buulypwczt"
, "rtDW.bobo4src3m" , "rtDW.ciqoxqno3n" , "rtDW.e2av4brvjw" ,
"rtDW.fy2pcwaiq4" , "rtDW.ijyrr5pcnk" , "rtDW.l2s1k43lyk" , "rtDW.b0xiuk0xhi"
, "rtDW.axsjjkipui" , "rtDW.f4lrzxvwzu" , "rtDW.gfvrstqzp2" ,
"rtDW.nozy5m20xv" , "rtDW.apsjm1y0wq" , "rtDW.bl0zsrdfdr" , "rtDW.j44ulxfog4"
, "rtDW.c43gr4lfcg" , "rtDW.hnqcsmtgzu" , "rtDW.fp1fv0c3dn" ,
"rtDW.ci5q0cjvne" , "rtDW.d2axjvvxsl" , "rtDW.nvonx4yx5b" , "rtDW.fcdvvtdyq2"
, "rtDW.fjb3gfugia" , "rtDW.akfzl3kzqo" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 27 , rtdwDataFieldNames ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW
. mwnril4rhy ) , sizeof ( rtDW . mwnril4rhy ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW
. ai1fy52fph ) , sizeof ( rtDW . ai1fy52fph ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( rtDW
. pzweb3waei ) , sizeof ( rtDW . pzweb3waei ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW
. buulypwczt ) , sizeof ( rtDW . buulypwczt ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW
. bobo4src3m ) , sizeof ( rtDW . bobo4src3m ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( rtDW
. ciqoxqno3n ) , sizeof ( rtDW . ciqoxqno3n ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW
. e2av4brvjw ) , sizeof ( rtDW . e2av4brvjw ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW
. fy2pcwaiq4 ) , sizeof ( rtDW . fy2pcwaiq4 ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( rtDW
. ijyrr5pcnk ) , sizeof ( rtDW . ijyrr5pcnk ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW
. l2s1k43lyk ) , sizeof ( rtDW . l2s1k43lyk ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & ( rtDW
. b0xiuk0xhi ) , sizeof ( rtDW . b0xiuk0xhi ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & ( rtDW
. axsjjkipui ) , sizeof ( rtDW . axsjjkipui ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW
. f4lrzxvwzu ) , sizeof ( rtDW . f4lrzxvwzu ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & ( rtDW
. gfvrstqzp2 ) , sizeof ( rtDW . gfvrstqzp2 ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & ( rtDW
. nozy5m20xv ) , sizeof ( rtDW . nozy5m20xv ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( rtDW
. apsjm1y0wq ) , sizeof ( rtDW . apsjm1y0wq ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & ( rtDW
. bl0zsrdfdr ) , sizeof ( rtDW . bl0zsrdfdr ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & ( rtDW
. j44ulxfog4 ) , sizeof ( rtDW . j44ulxfog4 ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( rtDW
. c43gr4lfcg ) , sizeof ( rtDW . c43gr4lfcg ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & ( rtDW
. hnqcsmtgzu ) , sizeof ( rtDW . hnqcsmtgzu ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & ( rtDW
. fp1fv0c3dn ) , sizeof ( rtDW . fp1fv0c3dn ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( rtDW
. ci5q0cjvne ) , sizeof ( rtDW . ci5q0cjvne ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & ( rtDW
. d2axjvvxsl ) , sizeof ( rtDW . d2axjvvxsl ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & ( rtDW
. nvonx4yx5b ) , sizeof ( rtDW . nvonx4yx5b ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & ( rtDW
. fcdvvtdyq2 ) , sizeof ( rtDW . fcdvvtdyq2 ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & ( rtDW
. fjb3gfugia ) , sizeof ( rtDW . fjb3gfugia ) ) ;
mr_pid_hfc_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & ( rtDW
. akfzl3kzqo ) , sizeof ( rtDW . akfzl3kzqo ) ) ; mxSetFieldByNumber ( ssDW ,
0 , 1 , rtdwData ) ; } return ssDW ; } void mr_pid_hfc_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ; mr_pid_hfc_restoreDataFromMxArray ( ( void
* ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData
= mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_pid_hfc_restoreDataFromMxArray ( (
void * ) & ( rtDW . mwnril4rhy ) , rtdwData , 0 , 0 , sizeof ( rtDW .
mwnril4rhy ) ) ; mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ai1fy52fph ) , rtdwData , 0 , 1 , sizeof ( rtDW . ai1fy52fph ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . pzweb3waei ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . pzweb3waei ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . buulypwczt ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . buulypwczt ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . bobo4src3m ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . bobo4src3m ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . ciqoxqno3n ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . ciqoxqno3n ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . e2av4brvjw ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . e2av4brvjw ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . fy2pcwaiq4 ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . fy2pcwaiq4 ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . ijyrr5pcnk ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . ijyrr5pcnk ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . l2s1k43lyk ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . l2s1k43lyk ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . b0xiuk0xhi ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . b0xiuk0xhi ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . axsjjkipui ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . axsjjkipui ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . f4lrzxvwzu ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . f4lrzxvwzu ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . gfvrstqzp2 ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . gfvrstqzp2 ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . nozy5m20xv ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . nozy5m20xv ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . apsjm1y0wq ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . apsjm1y0wq ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . bl0zsrdfdr ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . bl0zsrdfdr ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . j44ulxfog4 ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . j44ulxfog4 ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . c43gr4lfcg ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . c43gr4lfcg ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . hnqcsmtgzu ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . hnqcsmtgzu ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . fp1fv0c3dn ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . fp1fv0c3dn ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . ci5q0cjvne ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . ci5q0cjvne ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . d2axjvvxsl ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . d2axjvvxsl ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . nvonx4yx5b ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . nvonx4yx5b ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . fcdvvtdyq2 ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . fcdvvtdyq2 ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . fjb3gfugia ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . fjb3gfugia ) ) ;
mr_pid_hfc_restoreDataFromMxArray ( ( void * ) & ( rtDW . akfzl3kzqo ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . akfzl3kzqo ) ) ; } } mxArray *
mr_pid_hfc_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 5 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 5 ] = { "S-Function" , "Scope" , "Scope" , "S-Function" ,
"FromSpreadsheet" , } ; static const char * blockPath [ 5 ] = {
"pid_hfc/powergui/EquivalentModel1/State-Space" , "pid_hfc/Scope" ,
"pid_hfc/Scope1" , "pid_hfc/powergui/EquivalentModel1/State-Space" ,
"pid_hfc/From Spreadsheet" , } ; static const int reason [ 5 ] = { 0 , 0 , 0
, 2 , 4 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 5 ; ++ ( subs [ 0 ] ) ) {
subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 3 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 109 ) ;
ssSetNumBlockIO ( rtS , 61 ) ; ssSetNumBlockParams ( rtS , 298 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3071850463U ) ; ssSetChecksumVal ( rtS , 1 ,
470438315U ) ; ssSetChecksumVal ( rtS , 2 , 3987730454U ) ; ssSetChecksumVal
( rtS , 3 , 2761785398U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 15 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
pid_hfc_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "pid_hfc" ) ; ssSetPath (
rtS , "pid_hfc" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 10.0 ) ;
{ static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval
= ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static
int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "CSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Transfer Fcn" ,
"pid_hfc/PID Controller/Integrator/Continuous/Integrator" ,
"pid_hfc/PID Controller/Filter/Cont. Filter/Filter" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 3 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 3 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ljdekygcqq ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . azqpehx540 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . fcisgekmsy ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 3 ] ;
static real_T absTol [ 3 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 3 ] = { 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 3 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 3 ] ; static uint8_T zcAttributes [ 36 ] = {
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 8 ] = { { 1 * sizeof (
boolean_T ) , ( char * ) ( & rtB . ouwoht5ci4 ) , ( NULL ) } , { 1 * sizeof (
boolean_T ) , ( char * ) ( & rtB . nokwdddffo ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . lzypmhzndc ) , ( NULL ) } , { 1 * sizeof (
uint8_T ) , ( char * ) ( & rtB . oojwlcphqb ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . ay2y0ocfyb ) , ( NULL ) } , { 1 * sizeof (
real_T ) , ( char * ) ( & rtB . oc0v4h1y5j ) , ( NULL ) } , { 1 * sizeof (
boolean_T ) , ( char * ) ( & rtB . bgqx5dwycb ) , ( NULL ) } , { 1 * sizeof (
boolean_T ) , ( char * ) ( & rtB . b1rqs431h1 ) , ( NULL ) } } ; { int i ;
for ( i = 0 ; i < 3 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.2 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
8 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23tb" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 36 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 36 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3071850463U ) ; ssSetChecksumVal ( rtS , 1 ,
470438315U ) ; ssSetChecksumVal ( rtS , 2 , 3987730454U ) ; ssSetChecksumVal
( rtS , 3 , 2761785398U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_pid_hfc_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_pid_hfc_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_pid_hfc_SetDWork ) ; rtP . Saturation3_UpperSat = rtInf ; rtP .
Saturation1_UpperSat = rtInf ; rtP . Saturation4_UpperSat_akmwgxb01z = rtInf
; rtP . Saturation5_UpperSat = rtInf ; rtP . zeroavoider_UpperSat = rtInf ;
rtP . zeroavoider2_UpperSat = rtInf ; rtP . Constant1_Value = rtInf ; rtP .
Constant2_Value = rtInf ; rtP . Saturation4_UpperSat_li4nm1wqn1 = rtInf ; rtP
. Saturation3_UpperSat_cnnssirnow = rtInf ; rtP . Saturation6_UpperSat =
rtInf ; rtP . Saturation7_UpperSat = rtInf ; rtP .
Saturation8_UpperSat_khsxyas1pj = rtInf ; rt_RapidReadMatFileAndUpdateParams
( rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } ssSetNumSFunctions
( rtS , 1 ) ; { static SimStruct childSFunctions [ 1 ] ; static SimStruct *
childSFunctionPtrs [ 1 ] ; ( void ) memset ( ( void * ) & childSFunctions [ 0
] , 0 , sizeof ( childSFunctions ) ) ; ssSetSFunctions ( rtS , &
childSFunctionPtrs [ 0 ] ) ; ssSetSFunction ( rtS , 0 , & childSFunctions [ 0
] ) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; static time_T
sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T sfcnTsMap [
1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ;
( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ;
ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts ,
& sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; {
static struct _ssBlkInfo2 _blkInfo2 ; struct _ssBlkInfo2 * blkInfo2 = &
_blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ; } { static struct
_ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 = & _portInfo2 ;
_ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; } ssSetMdlInfoPtr ( rts ,
ssGetMdlInfoPtr ( rtS ) ) ; { static struct _ssSFcnModelMethods2 methods2 ;
ssSetModelMethods2 ( rts , & methods2 ) ; } { static struct
_ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , & methods3 ) ; } {
static struct _ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , &
methods4 ) ; } { static struct _ssStatesInfo2 statesInfo2 ; static
ssPeriodicStatesInfo periodicStatesInfo ; static ssJacobianPerturbationBounds
jacPerturbationBounds ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; } {
static struct _ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts ,
2 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 2 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ;
ssSetInputPortUnit ( rts , 1 , 0 ) ; { static struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 2 ] ; _ssSetPortInfo2ForInputCoSimAttribute ( rts ,
& inputPortCoSimAttribute [ 0 ] ) ; } ssSetInputPortIsContinuousQuantity (
rts , 0 , 0 ) ; ssSetInputPortIsContinuousQuantity ( rts , 1 , 0 ) ; { static
real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . gcuewowv5r ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
lfvm4alwxg ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 2 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 2 ) ; { static struct _ssOutPortUnit
outputPortUnits [ 2 ] ; _ssSetPortInfo2ForOutputUnits ( rts , &
outputPortUnits [ 0 ] ) ; } ssSetOutputPortUnit ( rts , 0 , 0 ) ;
ssSetOutputPortUnit ( rts , 1 , 0 ) ; { static struct
_ssOutPortCoSimAttribute outputPortCoSimAttribute [ 2 ] ;
_ssSetPortInfo2ForOutputCoSimAttribute ( rts , & outputPortCoSimAttribute [ 0
] ) ; } ssSetOutputPortIsContinuousQuantity ( rts , 0 , 0 ) ;
ssSetOutputPortIsContinuousQuantity ( rts , 1 , 0 ) ; {
_ssSetOutputPortNumDimensions ( rts , 0 , 1 ) ; ssSetOutputPortWidth ( rts ,
0 , 1 ) ; ssSetOutputPortSignal ( rts , 0 , ( ( real_T * ) & rtB . bmltweyfyf
) ) ; } { _ssSetOutputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetOutputPortWidth ( rts , 1 , 2 ) ; ssSetOutputPortSignal ( rts , 1 , ( (
real_T * ) rtB . bdvmeusvb5 ) ) ; } } ssSetModelName ( rts , "State-Space" )
; ssSetPath ( rts , "pid_hfc/powergui/EquivalentModel1/State-Space" ) ; if (
ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 10 ] ; ssSetSFcnParamsCount ( rts , 10 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . StateSpace_P1_Size ) ; ssSetSFcnParam ( rts , 1 , (
mxArray * ) rtP . StateSpace_P2_Size ) ; ssSetSFcnParam ( rts , 2 , ( mxArray
* ) rtP . StateSpace_P3_Size ) ; ssSetSFcnParam ( rts , 3 , ( mxArray * ) rtP
. StateSpace_P4_Size ) ; ssSetSFcnParam ( rts , 4 , ( mxArray * ) rtP .
StateSpace_P5_Size ) ; ssSetSFcnParam ( rts , 5 , ( mxArray * ) rtP .
StateSpace_P6_Size ) ; ssSetSFcnParam ( rts , 6 , ( mxArray * ) rtP .
StateSpace_P7_Size ) ; ssSetSFcnParam ( rts , 7 , ( mxArray * ) rtP .
StateSpace_P8_Size ) ; ssSetSFcnParam ( rts , 8 , ( mxArray * ) rtP .
StateSpace_P9_Size ) ; ssSetSFcnParam ( rts , 9 , ( mxArray * ) rtP .
StateSpace_P10_Size ) ; } ssSetRWork ( rts , ( real_T * ) & rtDW . ai1fy52fph
[ 0 ] ) ; ssSetIWork ( rts , ( int_T * ) & rtDW . pzweb3waei [ 0 ] ) ;
ssSetPWork ( rts , ( void * * ) & rtDW . mxmp0bdte2 [ 0 ] ) ; { static struct
_ssDWorkRecord dWorkRecord [ 4 ] ; static struct _ssDWorkAuxRecord
dWorkAuxRecord [ 4 ] ; ssSetSFcnDWork ( rts , dWorkRecord ) ;
ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 4 ) ;
ssSetDWorkWidth ( rts , 0 , 2 ) ; ssSetDWorkDataType ( rts , 0 , SS_INTEGER )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
f4lrzxvwzu [ 0 ] ) ; ssSetDWorkWidth ( rts , 1 , 2 ) ; ssSetDWorkDataType (
rts , 1 , SS_DOUBLE ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork
( rts , 1 , & rtDW . ai1fy52fph [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 23 ) ;
ssSetDWorkDataType ( rts , 2 , SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . pzweb3waei [ 0 ] ) ;
ssSetDWorkWidth ( rts , 3 , 22 ) ; ssSetDWorkDataType ( rts , 3 , SS_POINTER
) ; ssSetDWorkComplexSignal ( rts , 3 , 0 ) ; ssSetDWork ( rts , 3 , & rtDW .
mxmp0bdte2 [ 0 ] ) ; } ssSetModeVector ( rts , ( int_T * ) & rtDW .
f4lrzxvwzu [ 0 ] ) ; sfun_spid_contc ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 0 ;
ssSetNumNonsampledZCs ( rts , 2 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortConnected ( rts , 1 , 1 ) ;
_ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ; _ssSetOutputPortBeingMerged (
rts , 1 , 0 ) ; ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ;
ssSetInputPortBufferDstPort ( rts , 1 , - 1 ) ; } } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
