#include "AltoidBot.h"

Servo frontLeft;
Servo frontRight;
Servo rearLeft;
Servo rearRight;

const int walkSteps = 6;

void setup()
{
  frontLeft.attach(3);
  frontRight.attach(5);
  rearLeft.attach(6);
  rearRight.attach(9);

  stand();
  delay(1000);

  wave();
  delay(500);

  for (int i = 0; i < walkSteps; i++)
  {
    walkForward();
  }
  stand();
  delay(500);

  turnAround();
  delay(500);

  sit();
}

void loop()
{
  // The startup routine runs once in setup(); nothing to do here.
}