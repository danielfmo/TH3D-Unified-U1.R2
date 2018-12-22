#ifndef INCLUDE_CONFIGURATION_ENDER3_CUSTOM_CONFIG_H_
#define INCLUDE_CONFIGURATION_ENDER3_CUSTOM_CONFIG_H_

#define ENDER3
#define SPEAKER_KILL
#define SLOWER_HOMING
#define USER_PRINTER_NAME "Ender3 Pro"

// #define LINEAR_ADVANCE
// #define LINEAR_ADVANCE_K 0
#define NEW_JERK_CONTROL
#define NEW_ACCELERATION_CONTROL

// #define PIDBED_ENABLE
// #define NO_COLD_PREVENT

#define HEATERS_ON_DURING_PROBING
#define EZABL_POINTS 5
#define EZABL_PROBE_EDGE 20

#define MANUAL_MESH_LEVELING
// #define CUSTOM_PROBE

#if ENABLED(CUSTOM_PROBE)
/**
 *   Z Probe to nozzle (X,Y) offset, relative to (0, 0).
 *   X and Y offsets must be whole numbers.
 *
 *   In the following example the X and Y offsets are both positive:
 *   #define X_PROBE_OFFSET_FROM_EXTRUDER 10
 *   #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
 *
 *      +-- BACK ---+
 *      |           |
 *    L |    (+) P  | R <-- probe (10,10)
 *    E |           | I
 *    F | (-) N (+) | G <-- nozzle (0,0)
 *    T |           | H
 *      |    (-)    | T
 *      |           |
 *      O-- FRONT --+
 *    (0,0)
 */
#define X_PROBE_OFFSET_FROM_EXTRUDER 10  // X offset: -left  +right  [of the nozzle]
#define Y_PROBE_OFFSET_FROM_EXTRUDER 10  // Y offset: -front +behind [the nozzle]
#endif

#endif  // INCLUDE_CONFIGURATION_ENDER3_CUSTOM_CONFIG_H_
