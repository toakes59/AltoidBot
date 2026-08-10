#include "AltoidBot.h"

void walkForward()
{
  frontLeft.write(clampAngle(70 + frontLeftTrim));
  rearRight.write(clampAngle(70 + rearRightTrim));

  frontRight.write(clampAngle(110 + frontRightTrim));
  rearLeft.write(clampAngle(110 + rearLeftTrim));

  delay(350);

  frontLeft.write(clampAngle(110 + frontLeftTrim));
  rearRight.write(clampAngle(110 + rearRightTrim));

  frontRight.write(clampAngle(70 + frontRightTrim));
  rearLeft.write(clampAngle(70 + rearLeftTrim));

  delay(350);
}

void stopRobot()
{
  stand();
}

static void turnStep()
{
  frontLeft.write(clampAngle(70 + frontLeftTrim));
  rearLeft.write(clampAngle(70 + rearLeftTrim));

  frontRight.write(clampAngle(70 + frontRightTrim));
  rearRight.write(clampAngle(70 + rearRightTrim));

  delay(400);
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
