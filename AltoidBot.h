#ifndef ALTOIDBOT_H
#define ALTOIDBOT_H

#include <Arduino.h>
#include <Servo.h>

extern Servo frontLeft;
extern Servo frontRight;
extern Servo rearLeft;
extern Servo rearRight;

// Per-leg trim to compensate for mounting differences (uneven horn seating,
// friction, leg length) that make the robot curve instead of walking straight.
// If it veers during walkForward(), nudge the trim of the leg(s) pushing too
// hard a few degrees at a time and retest.
const int frontLeftTrim = 0;
const int frontRightTrim = 0;
const int rearLeftTrim = 0;
const int rearRightTrim = 0;

inline int clampAngle(int angle)
{
  return constrain(angle, 0, 180);
}

void stand();
void sit();
void layDown();

void wave();
void jump();

void walkForward();
void stopRobot();
void turnRight();
void turnAround(int steps = 6);

#endif
