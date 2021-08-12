#pragma once

// Pin Definitions
#define SERVO_PULSE       4
#define SERVO_DIR         16
#define SERVO_ENABLE      17
#define SERVO_ENDSTOP     25
#define SERVO_ALARM       26
#define PWM               21
#define STATUS_PIN        22        // IoTWebConf WiFi Status Pin
#define BUTTON_PIN        23        // IoTWebConf Button (for restoring default WiFi AP)


// Servo Settings:
#define STEP_PER_REV      3200      // How many steps per revolution of the motor (S1 on)
#define PULLEY_TEETH      20        // How many teeth has the pulley
#define BELT_PITCH        2         // What is the timing belt pitch in mm
#define MAX_TRAVEL        160       // What is the maximum physical travel in mm
#define KEEPOUT_BOUNDARY  5         // Soft endstop preventing hard crashes in mm. Will be 
                                    // subtracted twice from MAX_TRAVEL
                                    // Should be sufficiently to completley drive clear from 
                                    // homing switch
#define MAX_RPM           2900      // What is the maximum RPM of the servo
#define MAX_ACCEL         300000    // Maximum acceleration in mm/s^2
#define INVERT_DIRECTION  false     // Set to true to invert the direction signal
                                    // The firmware expects the home switch to be located at the 
                                    // end of an retraction move. That way the machine homes 
                                    // itself away from the body. Home position is -KEEPOUTBOUNDARY
#define SERVO_ACTIVE_LOW  true      // Polarity of the enable signal. True for active low.

// Default Settings:
#define STROKE            60        // Stroke defaults to 60 mm
#define DEPTH             TRAVEL    // Stroke is carried out at the front of the machine
#define SPEED             60        // 60 Strokes per Minute

// Housekeeping Settings:
#define CONFIG_VERSION      "fio00.01"      // Version of the configuration
#define THINGNAME           "FuckIO"        // Inital Thing Name, also used as hostname, MQTT topic root and AP name
#define INITIAL_AP_PASSWORD "smrtTHNG32"    // Default password of the AP, must be changed on first start, 
                                            // but can be restored by the WiFi button
#define SERIAL_BAUDS         115200         // Default baud rate for serial communication over USB
#define RSSI_UPDATES         500            // Intervall in ms at which the RSSI value should be send as MQTT message
#define STRING_LEN           64             // Bytes used to initalize char array. No path, topic, name, etc. should exceed this value

