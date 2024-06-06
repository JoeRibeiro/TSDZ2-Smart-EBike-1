/*
 * config.h
 *
 *  Automatically created by TSDS2 Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define MOTOR_TYPE 0
#define TORQUE_SENSOR_CALIBRATED 0
#define MOTOR_ACCELERATION  35
#define MOTOR_ASSISTANCE_WITHOUT_PEDAL_ROTATION 0
#define ASSISTANCE_WITHOUT_PEDAL_ROTATION_THRESHOLD 20
#define PEDAL_TORQUE_PER_10_BIT_ADC_STEP_X100 67
#define PEDAL_TORQUE_ADC_MAX 300
#define STARTUP_BOOST_TORQUE_FACTOR 300
#define MOTOR_BLOCKED_COUNTER_THRESHOLD 2
#define MOTOR_BLOCKED_BATTERY_CURRENT_THRESHOLD_X10 30
#define MOTOR_BLOCKED_ERPS_THRESHOLD 20
#define STARTUP_BOOST_CADENCE_STEP 20
#define BATTERY_CURRENT_MAX 13
#define TARGET_MAX_BATTERY_POWER 500
#define TARGET_MAX_BATTERY_CAPACITY 500
#define BATTERY_CELLS_NUMBER 13
#define MOTOR_DECELERATION 35
#define BATTERY_LOW_VOLTAGE_CUT_OFF 39
#define ACTUAL_BATTERY_VOLTAGE_PERCENT 100
#define ACTUAL_BATTERY_CAPACITY_PERCENT 90
#define LI_ION_CELL_OVERVOLT 4.35
#define LI_ION_CELL_RESET_SOC_PERCENT 4.10
#define LI_ION_CELL_VOLTS_FULL 4.10
#define LI_ION_CELL_VOLTS_3_OF_4 3.85
#define LI_ION_CELL_VOLTS_2_OF_4 3.60
#define LI_ION_CELL_VOLTS_1_OF_4 3.35
#define LI_ION_CELL_VOLTS_5_OF_6 3.94
#define LI_ION_CELL_VOLTS_4_OF_6 3.76
#define LI_ION_CELL_VOLTS_3_OF_6 3.60
#define LI_ION_CELL_VOLTS_2_OF_6 3.44
#define LI_ION_CELL_VOLTS_1_OF_6 3.26
#define LI_ION_CELL_VOLTS_EMPTY 3.10
#define WHEEL_PERIMETER 2200
#define WHEEL_MAX_SPEED 25
#define ENABLE_LIGHTS 1
#define ENABLE_WALK_ASSIST 1
#define ENABLE_BRAKE_SENSOR 0
#define ENABLE_THROTTLE 0
#define ENABLE_TEMPERATURE_LIMIT 0
#define ENABLE_STREET_MODE_ON_STARTUP 1
#define ENABLE_SET_PARAMETER_ON_STARTUP 0
#define ENABLE_ODOMETER_COMPENSATION 0
#define STARTUP_BOOST_ON_STARTUP 1
#define TORQUE_SENSOR_ADV_ON_STARTUP 0
#define LIGHTS_CONFIGURATION_ON_STARTUP 0
#define RIDING_MODE_ON_STARTUP 1
#define LIGHTS_CONFIGURATION_1 1
#define LIGHTS_CONFIGURATION_2 9
#define LIGHTS_CONFIGURATION_3 10
#define STREET_MODE_POWER_LIMIT_ENABLED 1
#define STREET_MODE_POWER_LIMIT 500
#define STREET_MODE_SPEED_LIMIT 25
#define STREET_MODE_THROTTLE_ENABLED 0
#define STREET_MODE_CRUISE_ENABLED 0
#define ADC_THROTTLE_MIN_VALUE 47
#define ADC_THROTTLE_MAX_VALUE 176
#define MOTOR_TEMPERATURE_MIN_VALUE_LIMIT 65
#define MOTOR_TEMPERATURE_MAX_VALUE_LIMIT 95
#define ENABLE_TEMPERATURE_ERROR_MIN_LIMIT 0
#define ENABLE_VLCD6 0
#define ENABLE_VLCD5 1
#define ENABLE_XH18 0
#define ENABLE_DISPLAY_WORKING_FLAG 1
#define ENABLE_DISPLAY_ALWAYS_ON 0
#define ENABLE_WHEEL_MAX_SPEED_FROM_DISPLAY 0
#define DELAY_MENU_ON 50
#define COASTER_BRAKE_ENABLED 0
#define COASTER_BRAKE_TORQUE_THRESHOLD 30
#define ENABLE_AUTO_DATA_DISPLAY 1
#define STARTUP_ASSIST_ENABLED 0
#define DELAY_DISPLAY_DATA_1 50
#define DELAY_DISPLAY_DATA_2 50
#define DELAY_DISPLAY_DATA_3 50
#define DELAY_DISPLAY_DATA_4 50
#define DELAY_DISPLAY_DATA_5 50
#define DELAY_DISPLAY_DATA_6 50
#define DISPLAY_DATA_1 1
#define DISPLAY_DATA_2 2
#define DISPLAY_DATA_3 10
#define DISPLAY_DATA_4 7
#define DISPLAY_DATA_5 4
#define DISPLAY_DATA_6 8
#define POWER_ASSIST_LEVEL_1 50
#define POWER_ASSIST_LEVEL_2 100
#define POWER_ASSIST_LEVEL_3 160
#define POWER_ASSIST_LEVEL_4 260
#define TORQUE_ASSIST_LEVEL_1 50
#define TORQUE_ASSIST_LEVEL_2 80
#define TORQUE_ASSIST_LEVEL_3 120
#define TORQUE_ASSIST_LEVEL_4 160
#define CADENCE_ASSIST_LEVEL_1 80
#define CADENCE_ASSIST_LEVEL_2 100
#define CADENCE_ASSIST_LEVEL_3 130
#define CADENCE_ASSIST_LEVEL_4 160
#define EMTB_ASSIST_LEVEL_1 60
#define EMTB_ASSIST_LEVEL_2 100
#define EMTB_ASSIST_LEVEL_3 140
#define EMTB_ASSIST_LEVEL_4 180
#define WALK_ASSIST_LEVEL_1 30
#define WALK_ASSIST_LEVEL_2 35
#define WALK_ASSIST_LEVEL_3 40
#define WALK_ASSIST_LEVEL_4 45
#define WALK_ASSIST_THRESHOLD_SPEED_X10 60
#define WALK_ASSIST_DEBOUNCE_ENABLED 0
#define WALK_ASSIST_DEBOUNCE_TIME 60
#define CRUISE_TARGET_SPEED_LEVEL_1 15
#define CRUISE_TARGET_SPEED_LEVEL_2 18
#define CRUISE_TARGET_SPEED_LEVEL_3 21
#define CRUISE_TARGET_SPEED_LEVEL_4 24
#define CRUISE_MODE_WALK_ENABLED 0
#define CRUISE_THRESHOLD_SPEED 10
#define PEDAL_TORQUE_ADC_OFFSET 150
#define AUTO_DATA_NUMBER_DISPLAY 3
#define UNITS_TYPE 0
#define ASSIST_THROTTLE_MIN_VALUE 0
#define ASSIST_THROTTLE_MAX_VALUE 255
#define STREET_MODE_WALK_ENABLED 1
#define DATA_DISPLAY_ON_STARTUP 1
#define FIELD_WEAKENING_ENABLED 0
#define PEDAL_TORQUE_ADC_OFFSET_ADJ 20
#define PEDAL_TORQUE_ADC_RANGE_ADJ 20
#define PEDAL_TORQUE_ADC_ANGLE_ADJ 36
#define PEDAL_TORQUE_PER_10_BIT_ADC_STEP_ADV_X100 34
#define SOC_PERCENT_CALC 0
#define STARTUP_BOOST_AT_ZERO 0
#define ENABLEC850 0
#define STREET_MODE_THROTTLE_LEGAL 0
#define BRAKE_TEMPERATURE_SWITCH 0
#define eMTB_BASED_ON_POWER 1
#define SMOOTH_START_ENABLED 1
#define SMOOTH_START_SET_PERCENT 35
#define TEMPERATURE_SENSOR_TYPE 0
#define CRUISE_MODE_ENABLED 1
#define THROTTLE_MODE 0
#define STREET_MODE_THROTTLE_MODE 0
#define ASSIST_LEVEL_1_OF_5_PERCENT 60
#define ALTERNATIVE_MILES 0

#endif /* CONFIG_H_ */