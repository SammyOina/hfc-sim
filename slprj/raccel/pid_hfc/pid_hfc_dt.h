#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_ACEj4P6ynLRF8GwymyGEpD" , 14 ,
392 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof (
real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) ,
sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof (
boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( void * ) ,
sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
struct_ACEj4P6ynLRF8GwymyGEpD ) } ; static const char_T * rtDataTypeNames [ ]
= { "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "struct_ACEj4P6ynLRF8GwymyGEpD" } ;
static DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB .
bavzijv0so ) , 0 , 0 , 58 } , { ( char_T * ) ( & rtB . oojwlcphqb ) , 3 , 0 ,
1 } , { ( char_T * ) ( & rtB . b1rqs431h1 ) , 8 , 0 , 4 } , { ( char_T * ) (
& rtDW . mwnril4rhy . TempDoubleOutput ) , 0 , 0 , 3 } , { ( char_T * ) ( &
rtDW . cxqxgzg5rp . ExcelLoader ) , 11 , 0 , 26 } , { ( char_T * ) ( & rtDW .
pzweb3waei [ 0 ] ) , 10 , 0 , 38 } , { ( char_T * ) ( & rtDW . bl0zsrdfdr ) ,
2 , 0 , 2 } , { ( char_T * ) ( & rtDW . c43gr4lfcg ) , 8 , 0 , 9 } } ; static
DataTypeTransitionTable rtBTransTable = { 8U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
PIDController_D ) , 0 , 0 , 298 } } ; static DataTypeTransitionTable
rtPTransTable = { 1U , rtPTransitions } ;
