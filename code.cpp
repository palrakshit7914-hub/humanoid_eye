#include <ESP32Servo.h>

// Servo_objects for controlling the servos.
Servo servoYaw;
Servo servoPitch;
Servo servoBlink;

// Pin numbers for the servos.
const int servoYawPin = 25;
const int servoPitchPin = 26;
const int servoBlinkPin = 27;