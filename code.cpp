#include <ESP32Servo.h>

// Servo_objects for controlling the servos.
Servo servoYaw;
Servo servoPitch;
Servo servoBlink;

// Pin numbers for the servos.
const int YawPin = 25;
const int PitchPin = 26;
const int BlinkPin = 27;

// PWM settings for the servos.
const int servoFrequency = 50; 
const int servoResolution = 16;

void setup() {
  // Attach the servos with min/max pulse width
  servoYaw.attach(YawPin, 500, 2500);
  servoPitch.attach(PitchPin, 500, 2500);
  servoBlink.attach(BlinkPin, 500, 2500);

  // Initialize the servos to their default positions.
  servoYaw.write(90);   // Center position for yaw
  servoPitch.write(90); // Center position for pitch
  servoBlink.write(0);  // Start with blink off
}