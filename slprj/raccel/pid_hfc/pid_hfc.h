#ifndef RTW_HEADER_pid_hfc_h_
#define RTW_HEADER_pid_hfc_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef pid_hfc_COMMON_INCLUDES_
#define pid_hfc_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtExcelReaderCAPI.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "pid_hfc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME pid_hfc
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (61) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (3)   
#elif NCSTATES != 3
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T bavzijv0so ; real_T daxvyr42tj ; real_T ivrdakrpkz ;
real_T gav1pd5ma3 ; real_T fqkwvndle1 ; real_T nvztzljheb ; real_T ljzmtubqwo
; real_T akyj4jonda ; real_T lzgsyascic ; real_T nmri2lmpfm ; real_T
ekul1otefy ; real_T lhtnm5lwwx ; real_T g1r5stuak1 ; real_T ob3xvrv14j ;
real_T btrx0xj1zo ; real_T dqmbk4jy2s ; real_T llkknoylr5 ; real_T efwiiajxhv
; real_T c0i2lpksv0 ; real_T ebodj1thau ; real_T pmuzvfqj2o ; real_T
jedtphj44b ; real_T jn0audc40e ; real_T g2hfsznaof ; real_T dqw3uf1b44 ;
real_T iqef1c31zx ; real_T oc0v4h1y5j ; real_T bprv4o1etg ; real_T ay2y0ocfyb
; real_T d3quvi1chz [ 2 ] ; real_T ine5zv1zjj [ 2 ] ; real_T o2r0cagjuy ;
real_T j3idclsmnt ; real_T lzypmhzndc ; real_T j1dd2aosj2 ; real_T b52xchwncs
; real_T kvwjc41uxn ; real_T gcuewowv5r ; real_T bmltweyfyf ; real_T
bdvmeusvb5 [ 2 ] ; real_T k5fxcufjvi ; real_T orai4150bl ; real_T ctcl1uvivk
; real_T i5reyjf5xo ; real_T l52p3jlley ; real_T mw20dncod2 ; real_T
ckwkubvaz1 ; real_T eskban3zwt ; real_T cajozp21sm ; real_T d1b4tb0oga ;
real_T gchfzymay5 ; real_T jolm4mpqdu ; real_T lfvm4alwxg ; real_T c0pcwbtojc
; real_T mm4pldrola ; uint8_T oojwlcphqb ; boolean_T b1rqs431h1 ; boolean_T
bgqx5dwycb ; boolean_T nokwdddffo ; boolean_T ouwoht5ci4 ; } B ; typedef
struct { struct { real_T TempDoubleOutput ; } mwnril4rhy ; real_T ai1fy52fph
[ 2 ] ; struct { void * ExcelLoader ; } cxqxgzg5rp ; void * mxmp0bdte2 [ 22 ]
; struct { void * LoggedData [ 2 ] ; } oldr1ubkd4 ; struct { void *
LoggedData ; } gefxylltzd ; int_T pzweb3waei [ 23 ] ; int_T buulypwczt ;
int_T bobo4src3m ; int_T ciqoxqno3n ; int_T e2av4brvjw ; int_T fy2pcwaiq4 ;
int_T ijyrr5pcnk ; int_T l2s1k43lyk ; int_T b0xiuk0xhi ; int_T axsjjkipui ;
int_T f4lrzxvwzu [ 2 ] ; int_T gfvrstqzp2 [ 2 ] ; int_T nozy5m20xv ; int_T
apsjm1y0wq ; int8_T bl0zsrdfdr ; int8_T j44ulxfog4 ; boolean_T c43gr4lfcg ;
boolean_T hnqcsmtgzu ; boolean_T fp1fv0c3dn ; boolean_T ci5q0cjvne ;
boolean_T d2axjvvxsl ; boolean_T nvonx4yx5b ; boolean_T fcdvvtdyq2 ;
boolean_T fjb3gfugia ; boolean_T akfzl3kzqo ; } DW ; typedef struct { real_T
ljdekygcqq ; real_T azqpehx540 ; real_T fcisgekmsy ; } X ; typedef struct {
real_T ljdekygcqq ; real_T azqpehx540 ; real_T fcisgekmsy ; } XDot ; typedef
struct { boolean_T ljdekygcqq ; boolean_T azqpehx540 ; boolean_T fcisgekmsy ;
} XDis ; typedef struct { real_T ljdekygcqq ; real_T azqpehx540 ; real_T
fcisgekmsy ; } CStateAbsTol ; typedef struct { real_T ljdekygcqq ; real_T
azqpehx540 ; real_T fcisgekmsy ; } CXPtMin ; typedef struct { real_T
ljdekygcqq ; real_T azqpehx540 ; real_T fcisgekmsy ; } CXPtMax ; typedef
struct { real_T pnxivloxbs ; real_T oltib0kshb ; real_T dqhsi053sd ; real_T
ifok1g33mx ; real_T ffqc1vkhpc ; real_T bxiwaw2pkv ; real_T my0sfsu1ul ;
real_T midepjp15g ; real_T cmdpuydnlz ; real_T ci2x0u2nnh ; real_T ava0ltnrge
; real_T ce2ewgh1lo ; real_T kknkgodjmx ; real_T ezecw1kcxn ; real_T
n3mlun3elm ; real_T i4zazq5ni3 ; real_T bzo2ksynu0 ; real_T ialldqk00b ;
real_T bmywgpnr04 ; real_T cbk3lkxatd ; real_T jpxkdme3mx ; real_T dva4ws03g1
; real_T g10eqzhgbz ; real_T aldvt1dbge ; real_T nulxn3pqg5 ; real_T
g0wi43ehjc ; real_T gywt0wmlxq [ 2 ] ; real_T meis45wroc [ 2 ] ; real_T
osqbb5155a [ 2 ] ; real_T hhincbv2km ; real_T enrlgv0322 ; real_T oi4t3zko5j
; real_T fjzju4lvw0 ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ;
} DataMapInfo ; struct P_ { real_T PIDController_D ; real_T PIDController_I ;
real_T PIDController_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T PIDController_N ; real_T
PIDController_P ; real_T CompareToConstant_const ; real_T
CompareToConstant2_const ; real_T CompareToConstant3_const ; real_T
Constant_Value ; real_T TransferFcn_A ; real_T TransferFcn_C ; real_T
Saturation3_UpperSat ; real_T Saturation3_LowerSat ; real_T Switch1_Threshold
; real_T Saturation8_UpperSat ; real_T Saturation8_LowerSat ; real_T
Switch2_Threshold ; real_T Saturation4_UpperSat ; real_T Saturation4_LowerSat
; real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T
Saturation4_UpperSat_akmwgxb01z ; real_T Saturation4_LowerSat_ij4zyjj5on ;
real_T Saturation5_UpperSat ; real_T Saturation5_LowerSat ; real_T
Switch_Threshold ; real_T Celldynamic_D ; real_T
Saturation1_UpperSat_ed1q0y3kri ; real_T Saturation1_LowerSat_ofmajn4n44 ;
real_T Gain2_Gain [ 2 ] ; real_T Saturation2_UpperSat ; real_T
Saturation2_LowerSat ; real_T Gain3_Gain ; real_T Gain1_Gain ; real_T
StateSpace_P1_Size [ 2 ] ; real_T StateSpace_P1 [ 8 ] ; real_T
StateSpace_P2_Size [ 2 ] ; real_T StateSpace_P2 [ 4 ] ; real_T
StateSpace_P3_Size [ 2 ] ; real_T StateSpace_P4_Size [ 2 ] ; real_T
StateSpace_P4 [ 188 ] ; real_T StateSpace_P5_Size [ 2 ] ; real_T
StateSpace_P5 [ 2 ] ; real_T StateSpace_P6_Size [ 2 ] ; real_T StateSpace_P6
; real_T StateSpace_P7_Size [ 2 ] ; real_T StateSpace_P7 ; real_T
StateSpace_P8_Size [ 2 ] ; real_T StateSpace_P8 ; real_T StateSpace_P9_Size [
2 ] ; real_T StateSpace_P9 ; real_T StateSpace_P10_Size [ 2 ] ; real_T
StateSpace_P10 ; real_T donotdeletethisgain_Gain ; real_T Saturation_UpperSat
; real_T Saturation_LowerSat ; real_T zeroavoider_UpperSat ; real_T
zeroavoider_LowerSat ; real_T zeroavoider2_UpperSat ; real_T
zeroavoider2_LowerSat ; real_T AirFr_Value ; real_T x_H2_Value ; real_T
Gain1_Gain_ev5b5aedsm ; real_T y_O2_Value ; real_T Gain3_Gain_a5cekjxgez ;
real_T Constant1_Value ; real_T Constant2_Value ; real_T
Constant_Value_bz5fk4zjsw ; real_T Constant1_Value_jwzwi0xdlm ; real_T
Constant2_Value_lcqxxdekmv ; real_T Saturation4_UpperSat_li4nm1wqn1 ; real_T
Saturation4_LowerSat_fv3k33vymh ; real_T Saturation3_UpperSat_cnnssirnow ;
real_T Saturation3_LowerSat_enqjjrirxf ; real_T
Saturation1_UpperSat_fbtjzsa0iv ; real_T Saturation1_LowerSat_dr422hztx1 ;
real_T Saturation2_UpperSat_luintzqobe ; real_T
Saturation2_LowerSat_p1pvj3bfvw ; real_T Pfuel_Value ; real_T
Saturation6_UpperSat ; real_T Saturation6_LowerSat ; real_T PAir_Value ;
real_T Saturation7_UpperSat ; real_T Saturation7_LowerSat ; real_T T_Value ;
real_T Saturation8_UpperSat_khsxyas1pj ; real_T
Saturation8_LowerSat_mopr0yl3on ; real_T gate_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_pid_hfc_GetDWork ( ) ; extern void
mr_pid_hfc_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_pid_hfc_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * pid_hfc_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
