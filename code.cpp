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
  servoBlink.write(90);  // Start with blink off

  delay(1000); // Allow time for the servos to reach their initial positions
}

void loop() {
  
  int randomYaw = random(60, 120);   // Random yaw angle between 0 and 180 degrees
  int randomPitch = random(70, 110); // Random pitch angle between 0 and 180 degrees
  
  servoYaw.write(randomYaw);
  servoPitch.write(randomPitch);

  delay(random(500,3000)); // Wait for 2 seconds before changing the angles again

  if (random(0, 10) < 7) { // 30% chance to blink
    performBlink();
  }
}
