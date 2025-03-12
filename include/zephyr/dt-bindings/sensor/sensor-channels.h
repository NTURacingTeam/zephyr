#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_SENSOR_SENSOR_CHANNELS_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_SENSOR_SENSOR_CHANNELS_H_

/** Acceleration on the X axis, in m/s^2. */
#define SENSOR_CHAN_ACCEL_X      0
/** Acceleration on the Y axis, in m/s^2. */
#define SENSOR_CHAN_ACCEL_Y      1
/** Acceleration on the Z axis, in m/s^2. */
#define SENSOR_CHAN_ACCEL_Z      2
/** Acceleration on the X, Y and Z axes. */
#define SENSOR_CHAN_ACCEL_XYZ    3
/** Angular velocity around the X axis, in radians/s. */
#define SENSOR_CHAN_GYRO_X       4
/** Angular velocity around the Y axis, in radians/s. */
#define SENSOR_CHAN_GYRO_Y       5
/** Angular velocity around the Z axis, in radians/s. */
#define SENSOR_CHAN_GYRO_Z       6
/** Angular velocity around the X, Y and Z axes. */
#define SENSOR_CHAN_GYRO_XYZ     7
/** Magnetic field on the X axis, in Gauss. */
#define SENSOR_CHAN_MAGN_X       8
/** Magnetic field on the Y axis, in Gauss. */
#define SENSOR_CHAN_MAGN_Y       9
/** Magnetic field on the Z axis, in Gauss. */
#define SENSOR_CHAN_MAGN_Z       10
/** Magnetic field on the X, Y and Z axes. */
#define SENSOR_CHAN_MAGN_XYZ     11
/** Device die temperature in degrees Celsius. */
#define SENSOR_CHAN_DIE_TEMP     12
/** Ambient temperature in degrees Celsius. */
#define SENSOR_CHAN_AMBIENT_TEMP 13
/** Pressure in kilopascal. */
#define SENSOR_CHAN_PRESS        14
/**
 * Proximity.  Adimensional.  A value of 1 indicates that an
 * object is close.
 */
#define SENSOR_CHAN_PROX         15
/** Humidity, in percent. */
#define SENSOR_CHAN_HUMIDITY     16
/** Illuminance in visible spectrum, in lux. */
#define SENSOR_CHAN_LIGHT        17
/** Illuminance in infra-red spectrum, in lux. */
#define SENSOR_CHAN_IR           18
/** Illuminance in red spectrum, in lux. */
#define SENSOR_CHAN_RED          19
/** Illuminance in green spectrum, in lux. */
#define SENSOR_CHAN_GREEN        20
/** Illuminance in blue spectrum, in lux. */
#define SENSOR_CHAN_BLUE         21
/** Altitude, in meters */
#define SENSOR_CHAN_ALTITUDE     22

/** 1.0 micro-meters Particulate Matter, in ug/m^3 */
#define SENSOR_CHAN_PM_1_0   23
/** 2.5 micro-meters Particulate Matter, in ug/m^3 */
#define SENSOR_CHAN_PM_2_5   24
/** 10 micro-meters Particulate Matter, in ug/m^3 */
#define SENSOR_CHAN_PM_10    25
/** Distance. From sensor to target, in meters */
#define SENSOR_CHAN_DISTANCE 26

/** CO2 level, in parts per million (ppm) **/
#define SENSOR_CHAN_CO2     27
/** O2 level, in parts per million (ppm) **/
#define SENSOR_CHAN_O2      28
/** VOC level, in parts per billion (ppb) **/
#define SENSOR_CHAN_VOC     29
/** Gas sensor resistance in ohms. */
#define SENSOR_CHAN_GAS_RES 30

/** Voltage, in volts **/
#define SENSOR_CHAN_VOLTAGE 31

/** Current Shunt Voltage in milli-volts **/
#define SENSOR_CHAN_VSHUNT 32

/** Current, in amps **/
#define SENSOR_CHAN_CURRENT 33
/** Power in watts **/
#define SENSOR_CHAN_POWER   34

/** Resistance , in Ohm **/
#define SENSOR_CHAN_RESISTANCE 35

/** Angular rotation, in degrees */
#define SENSOR_CHAN_ROTATION 36

/** Position change on the X axis, in points. */
#define SENSOR_CHAN_POS_DX   37
/** Position change on the Y axis, in points. */
#define SENSOR_CHAN_POS_DY   38
/** Position change on the Z axis, in points. */
#define SENSOR_CHAN_POS_DZ   39
/** Position change on the X, Y and Z axis, in points. */
#define SENSOR_CHAN_POS_DXYZ 40

/** Revolutions per minute, in RPM. */
#define SENSOR_CHAN_RPM 41

/** Frequency, in Hz. */
#define SENSOR_CHAN_FREQUENCY 42

/** Voltage, in volts **/
#define SENSOR_CHAN_GAUGE_VOLTAGE                   43
/** Average current, in amps **/
#define SENSOR_CHAN_GAUGE_AVG_CURRENT               44
/** Standby current, in amps **/
#define SENSOR_CHAN_GAUGE_STDBY_CURRENT             45
/** Max load current, in amps **/
#define SENSOR_CHAN_GAUGE_MAX_LOAD_CURRENT          46
/** Gauge temperature  **/
#define SENSOR_CHAN_GAUGE_TEMP                      47
/** State of charge measurement in % **/
#define SENSOR_CHAN_GAUGE_STATE_OF_CHARGE           48
/** Full Charge Capacity in mAh **/
#define SENSOR_CHAN_GAUGE_FULL_CHARGE_CAPACITY      49
/** Remaining Charge Capacity in mAh **/
#define SENSOR_CHAN_GAUGE_REMAINING_CHARGE_CAPACITY 50
/** Nominal Available Capacity in mAh **/
#define SENSOR_CHAN_GAUGE_NOM_AVAIL_CAPACITY        51
/** Full Available Capacity in mAh **/
#define SENSOR_CHAN_GAUGE_FULL_AVAIL_CAPACITY       52
/** Average power in mW **/
#define SENSOR_CHAN_GAUGE_AVG_POWER                 53
/** State of health measurement in % **/
#define SENSOR_CHAN_GAUGE_STATE_OF_HEALTH           54
/** Time to empty in minutes **/
#define SENSOR_CHAN_GAUGE_TIME_TO_EMPTY             55
/** Time to full in minutes **/
#define SENSOR_CHAN_GAUGE_TIME_TO_FULL              56
/** Cycle count (total number of charge/discharge cycles) **/
#define SENSOR_CHAN_GAUGE_CYCLE_COUNT               57
/** Design voltage of cell in V (max voltage)*/
#define SENSOR_CHAN_GAUGE_DESIGN_VOLTAGE            58
/** Desired voltage of cell in V (nominal voltage) */
#define SENSOR_CHAN_GAUGE_DESIRED_VOLTAGE           59
/** Desired charging current in mA */
#define SENSOR_CHAN_GAUGE_DESIRED_CHARGING_CURRENT  60
/** Game Rotation Vector (unit quaternion components X/Y/Z/W) */
#define SENSOR_CHAN_GAME_ROTATION_VECTOR            61
/** Gravity Vector (X/Y/Z components in m/s^2) */
#define SENSOR_CHAN_GRAVITY_VECTOR                  62
/** Gyroscope bias (X/Y/Z components in radians/s) */
#define SENSOR_CHAN_GBIAS_XYZ                       63

/** All channels. */
#define SENSOR_CHAN_ALL 64

/**
 * Number of all common sensor channels.
 */
#define SENSOR_CHAN_COMMON_COUNT SENSOR_CHAN_ALL

/**
 * This and higher values are sensor specific.
 * Refer to the sensor header file.
 */
#define SENSOR_CHAN_PRIV_START SENSOR_CHAN_COMMON_COUNT

/**
 * Maximum value describing a sensor channel type.
 */
#define SENSOR_CHAN_MAX 8191

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_SENSOR_SENSOR_CHANNELS_H_ */
