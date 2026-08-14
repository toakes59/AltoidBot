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
  rearRight.attach(6);
  rearLeft.attach(9);

  stand();
  delay(1000);

  wave();
  delay(5000);

  for (int i = 0; i < walkSteps; i++)
  {
    walkForward();
  }
  stand();
  delay(500);

 // turnAround();
 // delay(500);

  sit();
  delay(5000);
  stand();
  delay(500);

  jump();
  delay(500);

  stand();
  delay(500);

  layDown();
}

void loop()
{
  // The startup routine runs once in setup(); nothing to do here.
}
