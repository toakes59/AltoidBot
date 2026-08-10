#include "AltoidBot.h"

void walkForward()
{
  frontLeft.write(70);
  rearRight.write(70);

  frontRight.write(110);
  rearLeft.write(110);

  delay(150);

  frontLeft.write(110);
  rearRight.write(110);

  frontRight.write(70);
  rearLeft.write(70);

  delay(150);
}

void stopRobot()
{
  stand();
}

static void turnStep()
{
  frontLeft.write(70);
  rearLeft.write(70);

  frontRight.write(70);
  rearRight.write(70);

  delay(250);
}

void turnRight()
{
  turnStep();
  stand();
}

void turnAround(int steps)
{
  for (int i = 0; i < steps; i++)
  {
    turnStep();
  }

  stand();
}
