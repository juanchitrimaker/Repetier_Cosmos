/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

// MAXI SD_PAUSA                : Lleva a codigo que se ejecuta cuando se presiona la pausa cuando se imprime con SD
// MAXI PANTALLA_PRINCIPAL      : Indica lo que se ve y como se ve
// MAXI EXTRUDER_MENU           : Dentro del primer menu esta "Extrusor"
// MAXI CONFIGURACION_RAPIDA    : Menu de configuración rápida de menu.

// MAXI PAGINA_1_PRINCIPAL      : Es la página con la que comienza
// MAXI PAGINA_2_POSICIONES     : Muestra las posiciones de cada eje
// MAXI PAGINA_3_TEMPERATURAS   : Muestra de temperaturas de cama y extrusor

// MAXI MENU_PRINCIPAL
// MAXI SUB_MENU_CONFIGURACION_RAPIDA
// MAXI SUB_MENU_EXTRUSOR
// MAXI SUB_MENU_CONFIGURACION

// MAXI IDIOMAS                 : Traducción de todos los IU_TEXT

// MAXI ACCION_NIVELACION_CAMA  :
// MAXI: Definicion de constantes de calibración manual de cama
// MAXI ACCION_CAMBIO_FILAMENTO : En la pantalla
// MAXI CAMBIO_FILAMENTO_RUTINA : Acciones que realiza la máquina para cambiar el filamento (Movimientos, guardar posición, etc)



#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

   This file is optimized for version 0.92
   generator: http://www.repetier.com/firmware/v092/

   If you are in doubt which named functions use which pins on your board, please check the
   pins.h for the used name->pin assignments and your board documentation to verify it is
   as you expect.

*/

#define NUM_EXTRUDER 1
#define MOTHERBOARD 80
#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################
// ################ END MANUAL SETTINGS ##########################

// retractionLongLength estaba en 13 y lo puse en 3 (Ver el que está en mayusculas también)
// FILAMENTCHANGE_LONGRETRACT 50 y lo puse en 3

#define FAN_BOARD_PIN -1   // MAXI : Decía -1
#define X_MAX_PIN -1
#define Y_MAX_PIN -1
#define Z_MAX_PIN -1

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not beeing compatible!
//#define COMPAT_PRE1
#define BLUETOOTH_SERIAL  -1
#define BLUETOOTH_BAUD  115200
#define MIXING_EXTRUDER 0

#define DRIVE_SYSTEM 0
#define XAXIS_STEPS_PER_MM 80                   // Ver Maxi - Decia: 80, 40, 20
#define YAXIS_STEPS_PER_MM 80                   // Ver Maxi - Decia: 80, 40, 20
#define ZAXIS_STEPS_PER_MM 400                  // Ver Maxi - Decia: 400, 200, 100
#define EXTRUDER_FAN_COOL_TEMP 50
#define PDM_FOR_EXTRUDER 1
#define PDM_FOR_COOLER 0
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 30    // VER MAXI: Firmware tests for decoupled sensor - heater. When target temperature is reached, the temperature
                                                // may only swing this amount or it will mark your combination as decoupled. If you get false alarams
                                                // after reaching target temperature, increase this value.

#define DECOUPLING_TEST_MIN_TEMP_RISE 1         // VER MAXI: On heatup, we expect at least this temperature rise after the time period set in the extruder.
                                                //If your measurement is stable, 1 is the value you want. VER: EXT0_DECOUPLE_TEST_PERIOD
#define KILL_IF_SENSOR_DEFECT 0
#define RETRACT_ON_PAUSE 3
#define PAUSE_START_COMMANDS "" //"G1 x30 y30 f800\n" Va directo al Y extremo X=0   // VER MAXI: Hay que poner un  http://forum.repetier.com/discussion/139/pause-error
#define PAUSE_END_COMMANDS ""
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_Z_OFFSET 0

// Menos el  5% es: 91.46144 en lugar de 96.2752
// Menos el 10% es: 86.64768 en lugar de 96.2752
#define EXT0_STEPS_PER_MM 86.64768               // Ver Maxi - Decia: 184.5504, 96.2752, 48.1376, 24.0688

#define EXT0_TEMPSENSOR_TYPE 5
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 0
#define EXT0_ENABLE_PIN E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0                        // For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 20
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 1
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 210
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_PGAIN_OR_DEAD_TIME 11.55       // VER MAXI: Parámetro P: Decía 14.29
#define EXT0_PID_I 0.67                         // Decía: 0.8
#define EXT0_PID_D 49.92                        // Decía: 64.03
#define EXT0_PID_MAX 190
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 190
#define EXT0_WAIT_RETRACT_UNITS 370
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN 8              // VER MAXI: Extruder PIN
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define EXT0_DECOUPLE_TEST_PERIOD 27000         // Cambiado al actual en V_1_4, antes decia: 23000  // VER MAXI: [ms] > Maximum time required to rise temperature by DECOUPLING_TEST_MIN_TEMP_RISE = 1.
                                                // If rising is slower, heaters will be disabled for safety.
#define EXT0_JAM_PIN -1
#define EXT0_JAM_PULLUP 0

#define FEATURE_RETRACTION 1                        //Allow retraction with G10/G11 removing requirement for retraction setting in slicer. Also allows filament change if lcd is configured. VER MAXI : Decía 0 -
// It is usefull, for example,  if you want to share gcode with a friend (instead of STL files).
// G10 S<1 = long retract, 0 = short retract = default> retracts filament according to stored setting
// G11 S<1 = long retract, 0 = short retract = default> = Undo retraction according to stored setting
// Ultimaker:
// G10 - retract filament according to settings of M207
// G11 - retract recover filament according to settings of M208
// M207 - set retract length S[positive mm] F[feedrate mm/sec] Z[additional zlift/hop]
// M208 - set recover=unretract length S[positive mm surplus to the M207 S*] F[feedrate mm/sec]

#define AUTORETRACT_ENABLED 0                       // VER MAXI : decía 0 - Ultimo cambio 14/11/15 - Autoretract converts pure extrusion moves into retractions. Beware that
                                                    // simple extrusion e.g. over Repetier-Host will then not work!
#define RETRACTION_LENGTH 3                         // VER MAXI : decía 0 - Ultimo cambio 14/11/15 - VER MAXI: Decía 3
#define RETRACTION_LONG_LENGTH 13
#define RETRACTION_SPEED 40
#define RETRACTION_Z_LIFT 0                         // VER MAXI : decía 0 - Ultimo cambio 14/11/15
#define RETRACTION_UNDO_EXTRA_LENGTH 0
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 0
#define RETRACTION_UNDO_SPEED 20
#define FILAMENTCHANGE_X_POS 132                    // VER MAXI: Cambio de filamento - Filament change x - Decía: 0
#define FILAMENTCHANGE_Y_POS 190                    // VER MAXI: Cambio de filamento - Filament change y - Decía: 0
#define FILAMENTCHANGE_Z_ADD 0                      // VER MAXI: Cambio de filamento - Filament change z lift - Decía: 2
#define FILAMENTCHANGE_REHOME 0                     // VER MAXI: Cambio de filamento - Homing after Filamentchange - Decía: 1
#define FILAMENTCHANGE_SHORTRETRACT 0               // VER MAXI: Cambio de filamento - Filament change first retract - Decía: 0
#define FILAMENTCHANGE_LONGRETRACT 0                // VER MAXI: Cambio de filamento - Filament change last retract - Decía: 50
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 320
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 500
#define JAM_MIN_STEPS 10
#define JAM_ACTION 0

#define RETRACT_DURING_HEATUP false
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
//#define NUM_TEMPS_USERTHERMISTOR0 6
//#define USER_THERMISTORTABLE0 {{6,800},{56,280},{106,160},{266,0},{339,-40},{432,-80}}

//#define NUM_TEMPS_USERTHERMISTOR0 127
//#define USER_THERMISTORTABLE0  {\
//  {48*4,250*8},{49*4,248*8},{51*4,246*8},{53*4,244*8},{54*4,242*8},{56*4,240*8},{58*4,238*8},{60*4,236*8},{62*4,234*8},{64*4,232*8},{66*4,230*8},{69*4,228*8},\
//  {71*4,226*8},{73*4,224*8},{76*4,222*8},{79*4,220*8},{81*4,218*8},{84*4,216*8},{87*4,214*8},{92*4,212*8},{93*4,210*8},{97*4,208*8},{100*4,206*8},{104*4,204*8},\
//  {108*4,202*8},{111*4,200*8},{115*4,198*8},{120*4,196*8},{124*4,194*8},{129*4,192*8},{133*4,190*8},{138*4,188*8},{143*4,186*8},{149*4,184*8},{154*4,182*8},\
//  {160*4,180*8},{166*4,178*8},{172*4,176*8},{178*4,174*8},{185*4,172*8},{192*4,170*8},{199*4,168*8},{206*4,166*8},{214*4,164*8},{217*4,162*8},{230*4,160*8},\
//  {238*4,158*8},{247*4,156*8},{256*4,154*8},{265*4,152*8},{275*4,150*8},{284*4,148*8},{295*4,146*8},{305*4,144*8},{316*4,142*8},{327*4,140*8},{338*4,138*8},\
//  {350*4,136*8},{362*4,134*8},{368*4,132*8},{387*4,130*8},{399*4,128*8},{412*4,126*8},{426*4,124*8},{439*4,122*8},{453*4,120*8},{467*4,118*8},{481*4,116*8},\
//  {495*4,114*8},{510*4,112*8},{524*4,110*8},{539*4,108*8},{554*4,106*8},{569*4,104*8},{584*4,102*8},{598*4,100*8},{613*4,98*8},{628*4,96*8},{643*4,94*8},\
//  {658*4,92*8},{672*4,90*8},{687*4,88*8},{701*4,86*8},{715*4,84*8},{729*4,82*8},{742*4,80*8},{755*4,78*8},{769*4,76*8},{781*4,74*8},{794*4,72*8},{806*4,70*8},\
//  {817*4,68*8},{823*4,66*8},{840*4,64*8},{850*4,62*8},{860*4,60*8},{870*4,58*8},{880*4,56*8},{889*4,54*8},{897*4,52*8},{905*4,50*8},{913*4,48*8},{921*4,46*8},\
//  {928*4,44*8},{934*4,42*8},{941*4,40*8},{947*4,38*8},{952*4,36*8},{958*4,34*8},{963*4,32*8},{968*4,30*8},{972*4,28*8},{976*4,26*8},{980*4,24*8},{984*4,22*8},\
//  {987*4,20*8},{990*4,18*8},{993*4,16*8},{996*4,14*8},{998*4,12*8},{1000*4,10*8},{1003*4,8*8},{1004*4,6*8},{1006*4,4*8},{1008*4,2*8},{1009*4,0*8},{1019*4,-20*8}}


// Termistor mercado libre
//#define NUM_TEMPS_USERTHERMISTOR0 33
//#define USER_THERMISTORTABLE0  {\
//  {48*4,250*8},{51*4,246*8},{56*4,240*8},{60*4,236*8},{66*4,230*8},{71*4,226*8},{79*4,220*8},{84*4,216*8},{93*4,210*8},{100*4,206*8},{111*4,200*8},\
//  {120*4,196*8},{133*4,190*8},{143*4,186*8},{160*4,180*8},{192*4,170*8},{230*4,160*8},{275*4,150*8},{327*4,140*8},{387*4,130*8},{453*4,120*8},{524*4,110*8},\
//  {598*4,100*8},{742*4,80*8},{806*4,70*8},{860*4,60*8},{905*4,50*8},{941*4,40*8},{968*4,30*8},{987*4,20*8},{1000*4,10*8},{1009*4,0*8},{1019*4,-20*8}}

// Termistor Geeetech
//#define NUM_TEMPS_USERTHERMISTOR0 44
//#define USER_THERMISTORTABLE0  {\
//   {61*4, 258*8},{71*4, 247*8},{81*4, 237*8},{91*4, 229*8},{101*4, 221*8},{111*4, 215*8},{121*4, 209*8},{131*4, 204*8},{141*4, 199*8},{151*4, 195*8},\
//   {161*4, 190*8},{171*4, 187*8},{181*4, 183*8},{191*4, 179*8},{201*4, 176*8},{211*4, 173*8},{221*4, 170*8},{231*4, 167*8},{241*4, 165*8},{251*4, 162*8},\
//   {261*4, 160*8},{301*4, 150*8},{351*4, 140*8},{411*4, 130*8},{471*4, 120*8},{541*4, 110*8},{611*4, 100*8},{621*4, 98*8},{631*4, 97*8},{641*4, 95*8},\
//   {651*4, 94*8},{661*4, 92*8},{671*4, 91*8},{681*4, 90*8},{741*4, 81*8},{801*4, 71*8},{861*4, 60*8},{901*4, 51*8},{931*4, 42*8},{961*4, 32*8},\
//   {971*4, 28*8},{1001*4, 9*8},{1011*4, -18*8},{1021*4, -26*8}}


// Termistor del Marlin:
// ATC Semitec 104GT-2 (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// MAXI : Se sacó {966*4, 30*8} y se modificó {986*4, 20*8} a {983*4, 20*8} para hacer coincidir la emperatura de la cama con la del extrusor
#define NUM_TEMPS_USERTHERMISTOR0 31
#define USER_THERMISTORTABLE0  {\
   {1*4, 713*8}  ,{17*4, 300*8} ,{20*4, 290*8} ,{23*4, 280*8} ,{27*4, 270*8} ,{31*4, 260*8} ,{37*4, 250*8} ,{43*4, 240*8} ,{51*4, 230*8},\
   {61*4, 220*8} ,{73*4, 210*8} ,{87*4, 200*8} ,{106*4, 190*8},{128*4, 180*8},{155*4, 170*8},{189*4, 160*8},{230*4, 150*8},{278*4, 140*8},\
   {336*4, 130*8},{402*4, 120*8},{476*4, 110*8},{554*4, 100*8},{635*4, 90*8} ,{713*4, 80*8} ,{784*4, 70*8} ,{846*4, 60*8} ,{897*4, 50*8},\
   {937*4, 40*8} ,{983*4, 20*8} ,{1000*4, 10*8},{1010*4, 0*8}}





#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 1
#define HEATED_BED_MAX_TEMP 110
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 2
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 1
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 215
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 215
#define HEATED_BED_DECOUPLE_TEST_PERIOD 240000        // VER MAXI: [ms] > Maximum time required to rise temperature by DECOUPLING_TEST_MIN_TEMP_RISE = 1.
                                                      // If rising is slower, heaters will be disabled for safety.
#define MIN_EXTRUDER_TEMP 170                         // MAXI: Decía 180 - En 190 el filamento nuestro deja pelos, en 180 extruye pero estaba al borde de desconectar
#define MAXTEMP 260
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 270

// ################ Endstop configuration #####################

#define ENDSTOP_PULLUP_X_MIN      false
#define ENDSTOP_X_MIN_INVERTING   true
#define MIN_HARDWARE_ENDSTOP_X    true
#define ENDSTOP_PULLUP_Y_MIN      false
#define ENDSTOP_Y_MIN_INVERTING   true
#define MIN_HARDWARE_ENDSTOP_Y    true
#define ENDSTOP_PULLUP_Z_MIN      false
#define ENDSTOP_Z_MIN_INVERTING   true
#define MIN_HARDWARE_ENDSTOP_Z    true
#define ENDSTOP_PULLUP_X_MAX      true
#define ENDSTOP_X_MAX_INVERTING   false
#define MAX_HARDWARE_ENDSTOP_X    false
#define ENDSTOP_PULLUP_Y_MAX      true
#define ENDSTOP_Y_MAX_INVERTING   false
#define MAX_HARDWARE_ENDSTOP_Y    false
#define ENDSTOP_PULLUP_Z_MAX      false
#define ENDSTOP_Z_MAX_INVERTING   true
#define MAX_HARDWARE_ENDSTOP_Z    false
#define max_software_endstop_r    true

#define min_software_endstop_x true
#define min_software_endstop_y true
#define min_software_endstop_z true
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 0                       // VER MAXI: Decía: 3
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 1
#define ENDSTOP_Y_BACK_ON_HOME 1
#define ENDSTOP_Z_BACK_ON_HOME 0                    // VER MAXI: Decía: 1 - Distancia que toma del switch al hacer home - Endstop distance after homing: This is the distance, that the extruder will have to endstops after homing is finished. Use this if you want to prevent triggering when you are near endstops or for delta printers to go a bit lower, so you can select between extruders without hitting the endstop.
#define ALWAYS_CHECK_ENDSTOPS 0                     // MAXI : decía 1 - Lo puse en 0 para evitar ruido de la máquina

// ################# XYZ movements ###################

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 1
#define INVERT_Y_DIR 1
#define INVERT_Z_DIR 0
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define X_MAX_LENGTH 300 // MAXI : Decía 264 - Ponemos mayor longitud por si el cabezal se mueve hasta el extremo mientras se
#define Y_MAX_LENGTH 250 // MAXI : Decía 190   transporta y pueda llegaral home cuando se lo manda (Sino corta por soft limit)
#define Z_MAX_LENGTH 150 // MAXI : Decía 130
#define X_MIN_POS -21    // MAXI : Decía 0
#define Y_MIN_POS -5     // MAXI : Decía 0
#define Z_MIN_POS 0
#define DISTORTION_CORRECTION 0
#define DISTORTION_CORRECTION_POINTS 5
#define DISTORTION_CORRECTION_R 100
#define DISTORTION_PERMANENT 1
#define DISTORTION_UPDATE_FREQUENCY 15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1
#define DISTORTION_EXTRAPOLATE_CORNERS 0

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 0
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves

// Delta settings
#define DELTA_HOME_ON_POWER 0
#define DELTASEGMENTS_PER_PRINTLINE 24

#define STEPPER_INACTIVE_TIME 600L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 90 // MAXI : Decía 120
#define MAX_FEEDRATE_Y 90 // MAXI : Decía 120
#define MAX_FEEDRATE_Z 7  // JUANCHI: Decia 3
#define HOMING_FEEDRATE_X 80 // MAXI : Decía 30  //JUANCHI: Decía 50
#define HOMING_FEEDRATE_Y 80 // MAXI : Decía 30  //JUANCHI: Decía 45
#define HOMING_FEEDRATE_Z 7  //JUANCHI: Decia 3
#define HOMING_ORDER HOME_ORDER_YXZ
#define ZHOME_MIN_TEMPERATURE 0
#define ZHOME_HEAT_ALL 1
#define ZHOME_HEAT_HEIGHT 20
#define ZHOME_X_POS 999999
#define ZHOME_Y_POS 999999
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 2 // VER MAXI - Debería ser 0 pero pongo 2 porque el datasheet dice 2useg
#define DIRECTION_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 2 // time in microseconds
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000 // MAXI : Decía 1000 originalmente - Los subimos de 600 por los hilos
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000 // MAXI : Decía 1000 originalmente - Los subimos de 600 por los hilos
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 50
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000 // MAXI : Decía 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000 // MAXI : Decía 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 50               // VER MAXI: Decía 100
#define MAX_JERK 10         // VER MAXI - Decía 20 como defoult
#define MAX_ZJERK 0.3
#define PRINTLINE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0
#define USE_ADVANCE 0                        // VER MAXI leer del firmware de github https://github.com/repetier/Repetier-Host/wiki/Test-generator
                                             // https://github.com/repetier/Repetier-Firmware/wiki/Hardware-settings-and-print-quality
#define ENABLE_QUADRATIC_ADVANCE 0


// ################# Misc. settings ##################

#define BAUDRATE 250000
#define ENABLE_POWER_ON_STARTUP 1   // VER MAXI - Decia: 1  -  Usado para encender el FAN que enfría los stepper drivers
#define POWER_INVERTING 1           // VER MAXI - Decia: 0  -  Usado para encender el FAN que enfría los stepper drivers
#define KILL_METHOD 1
#define ACK_WITH_LINENUMBER 0
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1
#define EEPROM_MODE 7               // VER MAXI - Decia: 0 - El 3 incluye los cambios en aceleración de movimiento y travel a 1000, además de la velocidad máxima de Y=45
#define PS_ON_PIN ORIG_PS_ON_PIN

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1
#define UI_SERVO_CONTROL 0
#define FAN_KICKSTART_TIME  200

        #define FEATURE_WATCHDOG 0

// #################### Z-Probing #####################

#define FEATURE_Z_PROBE 0
#define Z_PROBE_BED_DISTANCE 10
#define Z_PROBE_PIN -1
#define Z_PROBE_PULLUP 0
#define Z_PROBE_ON_HIGH 0
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_HEIGHT 40
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define FEATURE_AUTOLEVEL 0               // MAXI : Decía 1
#define Z_PROBE_X1 20
#define Z_PROBE_Y1 20
#define Z_PROBE_X2 160
#define Z_PROBE_Y2 20
#define Z_PROBE_X3 100
#define Z_PROBE_Y3 160
#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0

// MAXI: Definición de constantes de posición de PAUSA

#define PAUSE_POSITION_X 14  // MAXI : Decía 34
#define PAUSE_POSITION_Y 160 // MAXI : Decía 177

// MAXI: Definición de constantes de calibración manual de cama

#define FEATURE_MANUALBEDCALIBRATION 1
#define MANUALBEDCALIBRATION_X1 50  // MAXI : Decía 70
#define MANUALBEDCALIBRATION_Y1 25  // MAXI : Decía 30
#define MANUALBEDCALIBRATION_X2 50  // MAXI : Decía 70
#define MANUALBEDCALIBRATION_Y2 155 // MAXI : Decía 160
#define MANUALBEDCALIBRATION_X3 200 // MAXI : Decía 220
#define MANUALBEDCALIBRATION_Y3 155 // MAXI : Decía 160
#define MANUALBEDCALIBRATION_X4 200 // MAXI : Decía 220
#define MANUALBEDCALIBRATION_Y4 25  // MAXI : Decía 30
#define MANUALBEDCALIBRATION_ZOUT 5       // Distacia que se separa la cama del extrusor para evitar que el primer movimiento en X-Y
                                          // choque la cama de costado

// MAXI : Definición de constantes de carga de filamento

#define FEATURE_FILAMENTCHARGE 1
#define FILAMENTCHARGE_TEMP_ABS 250
#define FILAMENTCHARGE_TEMP_PLA 210       // Buscar la temperatura que permita sacar el ABS y luego poner el PLA sin daño
#define FILAMENTCHARGEPOSITION_X 120      // MAXI : Decía 140
#define FILAMENTCHARGEPOSITION_Y 150      // MAXI : Decía 160
#define FILAMENTCHARGEPOSITION_ZOUT 40    // Distacia que se separa la cama del extrusor para evitar que el primer movimiento en X-Y
                                          // choque la cama de costado

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
  #define SDSUPPORT 1           // VER MAXI - Decia: 0  - Modificar la variable en minusculas
  #define SDCARDDETECT 49       // VER MAXI - Decia: -1 - Modificar la variable en minusculas
  #define SDCARDDETECTINVERTED 0
#endif

#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define SD_RUN_ON_STOP "M117 Impresion detenida\n G90\n G92 E0\n G1 E-1\n G92 E0\n M140 S0\n M104 S0\n G1 Z130\n G1 X-21\n G1 Y-5\n M107\n M84\n"    // VER MAXI: Rutina agregada  ; JUANCHI: no aparece mas el Y HOME
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1

#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1 // MAXI : Decía 0
#if FEATURE_FAN_CONTROL
  #define FAN_PIN ORIG_FAN_PIN
#endif
#define FEATURE_CONTROLLER 1  // MAXI : Decia 0 - (Cambiar abajo en minusculas) Ahora activo Manual definition of display and keys parameter in uiconfig.h
#define UI_LANGUAGE 5         // Español
#define UI_PRINTER_NAME "COSMOS - Version 1.7"
#define UI_PRINTER_COMPANY "Trimaker"
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 0
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_REVERSE_ENCODER 0
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 0
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 2000 // MAXI : Delay de la pantalla inicial de presentación
#define UI_DYNAMIC_ENCODER_SPEED 1
        /**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 60
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   190
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 100
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   240
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   260
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3


#define NUM_MOTOR_DRIVERS 0



#endif

/* Below you will find the configuration string, that created this Configuration.h

========== Start configuration string ==========
{
    "editMode": 2,
    "processor": 0,
    "baudrate": 250000,
    "bluetoothSerial": -1,
    "bluetoothBaudrate": 115200,
    "xStepsPerMM": 80,
    "yStepsPerMM": 80,
    "zStepsPerMM": 400,
    "xInvert": 0,
    "xInvertEnable": 0,
    "eepromMode": 0,
    "yInvert": 0,
    "yInvertEnable": 0,
    "zInvert": 0,
    "zInvertEnable": 0,
    "extruder": [
        {
            "id": 0,
            "heatManager": 1,
            "pidDriveMin": 40,
            "pidDriveMax": 210,
            "pidMax": 190,
            "sensorType": 5,
            "sensorPin": "TEMP_0_PIN",
            "heaterPin": "HEATER_0_PIN",
            "maxFeedrate": 50,
            "startFeedrate": 20,
            "invert": "0",
            "invertEnable": "0",
            "acceleration": 5000,
            "watchPeriod": 1,
            "pidP": 14.29,
            "pidI": 0.8,
            "pidD": 64.03,
            "advanceK": 0,
            "advanceL": 0,
            "waitRetractTemp": 190,
            "waitRetractUnits": 370,
            "waitRetract": 1,
            "stepsPerMM": 96.2752,
            "coolerPin": 8,
            "coolerSpeed": 255,
            "selectCommands": "",
            "deselectCommands": "",
            "xOffset": 0,
            "yOffset": 0,
            "zOffset": 0,
            "xOffsetSteps": 0,
            "yOffsetSteps": 0,
            "zOffsetSteps": 0,
            "stepper": {
                "name": "Extruder 0",
                "step": "ORIG_E0_STEP_PIN",
                "dir": "ORIG_E0_DIR_PIN",
                "enable": "E0_ENABLE_PIN"
            },
            "advanceBacklashSteps": 0,
            "decoupleTestPeriod": 300,
            "jamPin": -1,
            "jamPullup": "0"
        }
    ],
    "uiLanguage": 0,
    "uiController": 1,
    "xMinEndstop": 4,
    "yMinEndstop": 4,
    "zMinEndstop": 4,
    "xMaxEndstop": 0,
    "yMaxEndstop": 0,
    "zMaxEndstop": 0,
    "motherboard": 80,
    "driveSystem": 0,
    "xMaxSpeed": 120,
    "xHomingSpeed": 30,
    "xTravelAcceleration": 1000,
    "xPrintAcceleration": 1000,
    "yMaxSpeed": 120,
    "yHomingSpeed": 30,
    "yTravelAcceleration": 1000,
    "yPrintAcceleration": 1000,
    "zMaxSpeed": 5,
    "zHomingSpeed": 3,
    "zTravelAcceleration": 100,
    "zPrintAcceleration": 100,
    "xMotor": {
        "name": "X motor",
        "step": "ORIG_X_STEP_PIN",
        "dir": "ORIG_X_DIR_PIN",
        "enable": "ORIG_X_ENABLE_PIN"
    },
    "yMotor": {
        "name": "Y motor",
        "step": "ORIG_Y_STEP_PIN",
        "dir": "ORIG_Y_DIR_PIN",
        "enable": "ORIG_Y_ENABLE_PIN"
    },
    "zMotor": {
        "name": "Z motor",
        "step": "ORIG_Z_STEP_PIN",
        "dir": "ORIG_Z_DIR_PIN",
        "enable": "ORIG_Z_ENABLE_PIN"
    },
    "enableBacklash": "0",
    "backlashX": 0,
    "backlashY": 0,
    "backlashZ": 0,
    "stepperInactiveTime": 600,
    "maxInactiveTime": 0,
    "xMinPos": 0,
    "yMinPos": 0,
    "zMinPos": 0,
    "xLength": 264,
    "yLength": 190,
    "zLength": 130,
    "alwaysCheckEndstops": "1",
    "disableX": "0",
    "disableY": "0",
    "disableZ": "0",
    "disableE": "0",
    "xHomeDir": "-1",
    "yHomeDir": "-1",
    "zHomeDir": "-1",
    "xEndstopBack": 1,
    "yEndstopBack": 1,
    "zEndstopBack": 1,
    "deltaSegmentsPerSecondPrint": 180,
    "deltaSegmentsPerSecondTravel": 70,
    "deltaDiagonalRod": 445,
    "deltaHorizontalRadius": 209.25,
    "deltaAlphaA": 210,
    "deltaAlphaB": 330,
    "deltaAlphaC": 90,
    "deltaDiagonalCorrA": 0,
    "deltaDiagonalCorrB": 0,
    "deltaDiagonalCorrC": 0,
    "deltaMaxRadius": 150,
    "deltaFloorSafetyMarginMM": 15,
    "deltaRadiusCorrA": 0,
    "deltaRadiusCorrB": 0,
    "deltaRadiusCorrC": 0,
    "deltaXOffsetSteps": 0,
    "deltaYOffsetSteps": 0,
    "deltaZOffsetSteps": 0,
    "deltaSegmentsPerLine": 24,
    "stepperHighDelay": 0,
    "directionDelay": 0,
    "stepDoublerFrequency": 12000,
    "allowQuadstepping": "1",
    "doubleStepDelay": 2,
    "maxJerk": 20,
    "maxZJerk": 0.3,
    "moveCacheSize": 20,
    "moveCacheLow": 10,
    "lowTicksPerMove": 250000,
    "enablePowerOnStartup": "1",
    "echoOnExecute": "1",
    "sendWaits": "1",
    "ackWithLineNumber": "0",
    "killMethod": 1,
    "useAdvance": "0",
    "useQuadraticAdvance": "0",
    "powerInverting": 0,
    "mirrorX": 0,
    "mirrorXMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "E1_ENABLE_PIN"
    },
    "mirrorY": 0,
    "mirrorYMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "E1_ENABLE_PIN"
    },
    "mirrorZ": 0,
    "mirrorZMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "E1_ENABLE_PIN"
    },
    "dittoPrinting": "0",
    "featureServos": "0",
    "servo0Pin": 11,
    "servo1Pin": -1,
    "servo2Pin": -1,
    "servo3Pin": -1,
    "featureWatchdog": "0",
    "hasHeatedBed": "1",
    "enableZProbing": "0",
    "extrudeMaxLength": 160,
    "homeOrder": "HOME_ORDER_YXZ",
    "featureController": 1,
    "uiPrinterName": "RepRap",
    "uiPrinterCompany": "Home made",
    "uiPagesDuration": 4000,
    "uiAnimation": "1",
    "uiDisablePageswitch": "1",
    "uiAutoReturnAfter": 30000,
    "featureKeys": "0",
    "uiEncoderSpeed": 1,
    "uiReverseEncoder": "0",
    "uiKeyBouncetime": 10,
    "uiKeyFirstRepeat": 500,
    "uiKeyReduceRepeat": 50,
    "uiKeyMinRepeat": 50,
    "featureBeeper": "0",
    "uiPresetBedTempPLA": 60,
    "uiPresetBedABS": 110,
    "uiPresetExtruderPLA": 190,
    "uiPresetExtruderABS": 240,
    "uiMinHeatedBed": 30,
    "uiMaxHeatedBed": 120,
    "uiMinEtxruderTemp": 170,
    "uiMaxExtruderTemp": 260,
    "uiExtruderFeedrate": 2,
    "uiExtruderRetractDistance": 3,
    "uiSpeeddependentPositioning": "0",
    "maxBedTemperature": 110,
    "bedSensorType": 2,
    "bedSensorPin": "TEMP_1_PIN",
    "bedHeaterPin": "HEATER_1_PIN",
    "bedHeatManager": 1,
    "bedUpdateInterval": 5000,
    "bedPidDriveMin": 80,
    "bedPidDriveMax": 215,
    "bedPidP": 196,
    "bedPidI": 33,
    "bedPidD": 290,
    "bedPidMax": 215,
    "bedDecoupleTestPeriod": 540,
    "caseLightPin": -1,
    "caseLightDefaultOn": "1",
    "bedSkipIfWithin": 3,
    "gen1T0": 25,
    "gen1R0": 100000,
    "gen1Beta": 4036,
    "gen1MinTemp": -20,
    "gen1MaxTemp": 300,
    "gen1R1": 0,
    "gen1R2": 4700,
    "gen2T0": 25,
    "gen2R0": 100000,
    "gen2Beta": 4036,
    "gen2MinTemp": -20,
    "gen2MaxTemp": 300,
    "gen2R1": 0,
    "gen2R2": 4700,
    "gen3T0": 25,
    "gen3R0": 100000,
    "gen3Beta": 4036,
    "gen3MinTemp": -20,
    "gen3MaxTemp": 300,
    "gen3R1": 0,
    "gen3R2": 4700,
    "userTable0": {
        "r1": 0,
        "r2": 4700,
        "temps": [
            {
                "t": 100,
                "r": 6.6101,
                "adc": 5.7511370019794
            },
            {
                "t": 35,
                "r": 65.2411,
                "adc": 56.064803205865
            },
            {
                "t": 20,
                "r": 124.9734,
                "adc": 106.06609209493
            },
            {
                "t": 0,
                "r": 327.0195,
                "adc": 266.38942866643
            },
            {
                "t": -5,
                "r": 424.0781,
                "adc": 338.90970933874
            },
            {
                "t": -10,
                "r": 554.7016,
                "adc": 432.2801226239
            }
        ],
        "numEntries": 6
    },
    "userTable1": {
        "r1": 0,
        "r2": 4700,
        "temps": []
    },
    "userTable2": {
        "r1": 0,
        "r2": 4700,
        "temps": []
    },
    "tempHysteresis": 0,
    "pidControlRange": 20,
    "skipM109Within": 2,
    "extruderFanCoolTemp": 50,
    "minTemp": 180,
    "maxTemp": 260,
    "minDefectTemp": -10,
    "maxDefectTemp": 275,
    "arcSupport": "1",
    "featureMemoryPositionWatchdog": "1",
    "forceChecksum": "0",
    "sdExtendedDir": "1",
    "featureFanControl": "0",
    "fanPin": "ORIG_FAN_PIN",
    "scalePidToMax": 0,
    "zProbePin": -1,
    "zProbeBedDistance": 10,
    "zProbePullup": "0",
    "zProbeOnHigh": "0",
    "zProbeXOffset": 0,
    "zProbeYOffset": 0,
    "zProbeWaitBeforeTest": "0",
    "zProbeSpeed": 2,
    "zProbeXYSpeed": 150,
    "zProbeHeight": 40,
    "zProbeStartScript": "",
    "zProbeFinishedScript": "",
    "featureAutolevel": "1",
    "zProbeX1": 20,
    "zProbeY1": 20,
    "zProbeX2": 160,
    "zProbeY2": 20,
    "zProbeX3": 100,
    "zProbeY3": 160,
    "zProbeSwitchingDistance": 1,
    "zProbeRepetitions": 1,
    "sdSupport": "1",
    "sdCardDetectPin": 49,
    "sdCardDetectInverted": "0",
    "uiStartScreenDelay": 1000,
    "xEndstopBackMove": 5,
    "yEndstopBackMove": 5,
    "zEndstopBackMove": 5,
    "xEndstopRetestFactor": 3,
    "yEndstopRetestFactor": 3,
    "zEndstopRetestFactor": 3,
    "xMinPin": "ORIG_X_MIN_PIN",
    "yMinPin": "ORIG_Y_MIN_PIN",
    "zMinPin": "ORIG_Z_MIN_PIN",
    "xMaxPin": -1,
    "yMaxPin": -1,
    "zMaxPin": -1,
    "deltaHomeOnPower": "0",
    "fanBoardPin": -1,
    "heaterPWMSpeed": 0,
    "featureBabystepping": "0",
    "babystepMultiplicator": 1,
    "pdmForHeater": "1",
    "pdmForCooler": "0",
    "psOn": "ORIG_PS_ON_PIN",
    "mixingExtruder": "0",
    "decouplingTestMaxHoldVariance": 20,
    "decouplingTestMinTempRise": 1,
    "featureAxisComp": "0",
    "axisCompTanXY": 0,
    "axisCompTanXZ": 0,
    "axisCompTanYZ": 0,
    "retractOnPause": 2,
    "pauseStartCommands": "",
    "pauseEndCommands": "",
    "distortionCorrection": "0",
    "distortionCorrectionPoints": 5,
    "distortionCorrectionR": 100,
    "distortionPermanent": "1",
    "distortionUpdateFrequency": 15,
    "distortionStartDegrade": 0.5,
    "distortionEndDegrade": 1,
    "distortionExtrapolateCorners": "0",
    "sdRunOnStop": "",
    "sdStopHeaterMotorsOnStop": "1",
    "featureRetraction": "0",
    "autoretractEnabled": "0",
    "retractionLength": 3,
    "retractionLongLength": 13,
    "retractionSpeed": 40,
    "retractionZLift": 0,
    "retractionUndoExtraLength": 0,
    "retractionUndoExtraLongLength": 0,
    "retractionUndoSpeed": 20,
    "filamentChangeXPos": 0,
    "filamentChangeYPos": 0,
    "filamentChangeZAdd": 2,
    "filamentChangeRehome": 1,
    "filamentChangeShortRetract": 5,
    "filamentChangeLongRetract": 50,
    "fanKickstart": 200,
    "servo0StartPos": -1,
    "servo1StartPos": -1,
    "servo2StartPos": -1,
    "servo3StartPos": -1,
    "uiDynamicEncoderSpeed": "1",
    "uiServoControl": 0,
    "killIfSensorDefect": "0",
    "jamSteps": 220,
    "jamSlowdownSteps": 320,
    "jamSlowdownTo": 70,
    "jamErrorSteps": 500,
    "jamMinSteps": 10,
    "jamAction": 0,
    "primaryPort": 0,
    "numMotorDrivers": 0,
    "motorDrivers": [
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        }
    ],
    "manualConfig": "",
    "zHomeMinTemperature": 0,
    "zHomeXPos": 999999,
    "zHomeYPos": 999999,
    "zHomeHeatHeight": 20,
    "zHomeHeatAll": "1",
    "hasMAX6675": false,
    "hasMAX31855": false,
    "hasGeneric1": false,
    "hasGeneric2": false,
    "hasGeneric3": false,
    "hasUser0": true,
    "hasUser1": false,
    "hasUser2": false,
    "numExtruder": 1,
    "version": 92.3,
    "primaryPortName": ""
}
========== End configuration string ==========

*/
