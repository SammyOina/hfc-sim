#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pid_hfc_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "pid_hfc.h"
#include "pid_hfc_capi.h"
#include "pid_hfc_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"pid_hfc/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "pid_hfc/From Spreadsheet" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Current Measurement1/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) , 1
, 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Diode1/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Fcn2" ) , TARGET_STRING (
"Voltage" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Fcn3" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation1" ) ,
TARGET_STRING ( "Fuel composition" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 ,
TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation2" ) ,
TARGET_STRING ( "Oxidant composition" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 ,
TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation3" ) ,
TARGET_STRING ( "Fuel flow rate / utilization" ) , 0 , 0 , 0 , 0 , 0 } , { 12
, 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation4" ) ,
TARGET_STRING ( "Air flow rate / utilization" ) , 0 , 0 , 0 , 0 , 1 } , { 13
, 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation6" ) ,
TARGET_STRING ( "Fuel supply pression" ) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 ,
TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation7" ) ,
TARGET_STRING ( "Air supply pression" ) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 ,
TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation8" ) ,
TARGET_STRING ( "Operating temperature" ) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 ,
TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Transfer Fcn" ) ,
TARGET_STRING ( "Current" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING
( "pid_hfc/PID Controller/D Gain/Internal Parameters/Derivative Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/Filter/Cont. Filter/Filter" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/Filter/Cont. Filter/SumD" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/I Gain/Internal Parameters/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/Integrator/Continuous/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/N Gain/Internal Parameters/Filter Coefficient" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"pid_hfc/PID Controller/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 25 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 26 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Data Type Conversion1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 27 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Data Type Conversion2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 28 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/MinMax" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation8"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Cell dynamic"
) , TARGET_STRING ( "Vact" ) , 0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING
(
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/PH2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/PH2O"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/PO2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Temp"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/i0 calc"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation5"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic/LowerRelop1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 48 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic/UpperRelop"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 49 , 1 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic/Switch2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic1/LowerRelop1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 52 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic1/UpperRelop"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 53 , 2 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic1/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation Dynamic1/Switch2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Saturation3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Switch1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Switch2"
) , TARGET_STRING ( "Uf_O2" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 ,
TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 60 , TARGET_STRING ( "pid_hfc/PID Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"pid_hfc/PID Controller" ) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 62 ,
TARGET_STRING ( "pid_hfc/PID Controller" ) , TARGET_STRING ( "D" ) , 0 , 0 ,
0 } , { 63 , TARGET_STRING ( "pid_hfc/PID Controller" ) , TARGET_STRING ( "N"
) , 0 , 0 , 0 } , { 64 , TARGET_STRING ( "pid_hfc/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 65 ,
TARGET_STRING ( "pid_hfc/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/AirFr" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 67 , TARGET_STRING ( "pid_hfc/Fuel Cell Stack/PAir" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Pfuel" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 69 , TARGET_STRING ( "pid_hfc/Fuel Cell Stack/T" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/x_H2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } ,
{ 71 , TARGET_STRING ( "pid_hfc/Fuel Cell Stack/y_O2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 73 , TARGET_STRING ( "pid_hfc/Fuel Cell Stack/Gain3" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Current Measurement1/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P1" ) ,
0 , 2 , 0 } , { 76 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P2" ) ,
0 , 3 , 0 } , { 77 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P4" ) ,
0 , 4 , 0 } , { 78 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P5" ) ,
0 , 1 , 0 } , { 79 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P6" ) ,
0 , 0 , 0 } , { 80 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P7" ) ,
0 , 0 , 0 } , { 81 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P8" ) ,
0 , 0 , 0 } , { 82 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P9" ) ,
0 , 0 , 0 } , { 83 , TARGET_STRING (
"pid_hfc/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "P10" ) ,
0 , 0 , 0 } , { 84 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Diode1/Model/(gate)" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 85 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation1" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation2" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation2" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation3" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation3" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation4" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation4" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation6" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation6" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation7" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation7" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation8" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Saturation8" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/zero avoider" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/zero avoider" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/zero avoider2" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/zero avoider2" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Transfer Fcn" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/Transfer Fcn" ) ,
TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Compare To Constant2"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Compare To Constant3"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Constant1" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 109 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Constant2" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 5 , 0 } , { 112 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation" )
, TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation2"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation2"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation4"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation4"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation8"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 122 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Saturation8"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING (
"pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Cell dynamic"
) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 124 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 125 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation4"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation4"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation5"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Saturation5"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Partial  pressure/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Saturation3"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Saturation3"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Switch1"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Switch2"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
 "pid_hfc/Fuel Cell Stack/Model/Continuous//Detailed/CellVoltage/Uf calculator/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ivrdakrpkz , & rtB . daxvyr42tj ,
& rtB . orai4150bl , & rtB . bmltweyfyf , & rtB . bdvmeusvb5 [ 0 ] , & rtB .
lfvm4alwxg , & rtB . k5fxcufjvi , & rtB . ctcl1uvivk , & rtB . i5reyjf5xo , &
rtB . eskban3zwt , & rtB . cajozp21sm , & rtB . ekul1otefy , & rtB .
mw20dncod2 , & rtB . d1b4tb0oga , & rtB . gchfzymay5 , & rtB . jolm4mpqdu , &
rtB . bavzijv0so , & rtB . nvztzljheb , & rtB . ljzmtubqwo , & rtB .
akyj4jonda , & rtB . l52p3jlley , & rtB . fqkwvndle1 , & rtB . lzgsyascic , &
rtB . gav1pd5ma3 , & rtB . nmri2lmpfm , & rtB . oc0v4h1y5j , & rtB .
lzypmhzndc , & rtB . ay2y0ocfyb , & rtB . kvwjc41uxn , & rtB . ine5zv1zjj [ 0
] , & rtB . j1dd2aosj2 , & rtB . o2r0cagjuy , & rtB . bprv4o1etg , & rtB .
j3idclsmnt , & rtB . btrx0xj1zo , & rtB . g1r5stuak1 , & rtB . b52xchwncs , &
rtB . iqef1c31zx , & rtB . llkknoylr5 , & rtB . pmuzvfqj2o , & rtB .
c0i2lpksv0 , & rtB . dqmbk4jy2s , & rtB . g2hfsznaof , & rtB . efwiiajxhv , &
rtB . ebodj1thau , & rtB . jedtphj44b , & rtB . jn0audc40e , & rtB .
nokwdddffo , & rtB . ouwoht5ci4 , & rtB . mm4pldrola , & rtB . gcuewowv5r , &
rtB . b1rqs431h1 , & rtB . bgqx5dwycb , & rtB . c0pcwbtojc , & rtB .
dqw3uf1b44 , & rtB . d3quvi1chz [ 0 ] , & rtB . ckwkubvaz1 , & rtB .
lhtnm5lwwx , & rtB . ob3xvrv14j , & rtB . oojwlcphqb , & rtP .
PIDController_P , & rtP . PIDController_I , & rtP . PIDController_D , & rtP .
PIDController_N , & rtP . PIDController_InitialConditionForIntegrator , & rtP
. PIDController_InitialConditionForFilter , & rtP . AirFr_Value , & rtP .
PAir_Value , & rtP . Pfuel_Value , & rtP . T_Value , & rtP . x_H2_Value , &
rtP . y_O2_Value , & rtP . Gain1_Gain_ev5b5aedsm , & rtP .
Gain3_Gain_a5cekjxgez , & rtP . donotdeletethisgain_Gain , & rtP .
StateSpace_P1 [ 0 ] , & rtP . StateSpace_P2 [ 0 ] , & rtP . StateSpace_P4 [ 0
] , & rtP . StateSpace_P5 [ 0 ] , & rtP . StateSpace_P6 , & rtP .
StateSpace_P7 , & rtP . StateSpace_P8 , & rtP . StateSpace_P9 , & rtP .
StateSpace_P10 , & rtP . gate_Value , & rtP . Saturation1_UpperSat_fbtjzsa0iv
, & rtP . Saturation1_LowerSat_dr422hztx1 , & rtP .
Saturation2_UpperSat_luintzqobe , & rtP . Saturation2_LowerSat_p1pvj3bfvw , &
rtP . Saturation3_UpperSat , & rtP . Saturation3_LowerSat , & rtP .
Saturation4_UpperSat_li4nm1wqn1 , & rtP . Saturation4_LowerSat_fv3k33vymh , &
rtP . Saturation6_UpperSat , & rtP . Saturation6_LowerSat , & rtP .
Saturation7_UpperSat , & rtP . Saturation7_LowerSat , & rtP .
Saturation8_UpperSat_khsxyas1pj , & rtP . Saturation8_LowerSat_mopr0yl3on , &
rtP . zeroavoider_UpperSat , & rtP . zeroavoider_LowerSat , & rtP .
zeroavoider2_UpperSat , & rtP . zeroavoider2_LowerSat , & rtP . TransferFcn_A
, & rtP . TransferFcn_C , & rtP . CompareToConstant_const , & rtP .
CompareToConstant2_const , & rtP . CompareToConstant3_const , & rtP .
Constant1_Value , & rtP . Constant2_Value , & rtP . Gain1_Gain , & rtP .
Gain2_Gain [ 0 ] , & rtP . Gain3_Gain , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . Saturation1_UpperSat_ed1q0y3kri , & rtP .
Saturation1_LowerSat_ofmajn4n44 , & rtP . Saturation2_UpperSat , & rtP .
Saturation2_LowerSat , & rtP . Saturation4_UpperSat , & rtP .
Saturation4_LowerSat , & rtP . Saturation8_UpperSat , & rtP .
Saturation8_LowerSat , & rtP . Celldynamic_D , & rtP .
Constant_Value_bz5fk4zjsw , & rtP . Saturation1_UpperSat , & rtP .
Saturation1_LowerSat , & rtP . Saturation4_UpperSat_akmwgxb01z , & rtP .
Saturation4_LowerSat_ij4zyjj5on , & rtP . Saturation5_UpperSat , & rtP .
Saturation5_LowerSat , & rtP . Switch_Threshold , & rtP .
Constant1_Value_jwzwi0xdlm , & rtP . Constant2_Value_lcqxxdekmv , & rtP .
Saturation3_UpperSat_cnnssirnow , & rtP . Saturation3_LowerSat_enqjjrirxf , &
rtP . Switch1_Threshold , & rtP . Switch2_Threshold , & rtP . Constant_Value
, } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) ,
SS_UINT8 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 4 , 2 , 1 , 4 ,
4 , 47 , 1 , 2 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 }
; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 60 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 79 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 3071850463U , 470438315U , 3987730454U ,
2761785398U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * pid_hfc_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void pid_hfc_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void pid_hfc_host_InitializeDataMapInfo ( pid_hfc_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
