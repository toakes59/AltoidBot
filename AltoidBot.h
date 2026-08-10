#ifndef ALTOIDBOT_H
#define ALTOIDBOT_H

#include <Servo.h>

extern Servo frontLeft;
extern Servo frontRight;
extern Servo rearLeft;
extern Servo rearRight;

void stand();
void sit();

void wave();

void walkForward();
void stopRobot();
void turnRight();
void turnAround(int steps = 6);

#endif
