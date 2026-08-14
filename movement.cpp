#include "AltoidBot.h"

void walkForward()
{
  // Verified from layDown(): frontLeft/rearLeft share one direction convention
  // (low angle = forward), frontRight/rearRight share the opposite one (high
  // angle = forward). So a diagonal push/reset stride means both front legs
  // take one value and both rear legs take the other, moving together.
  frontLeft.write(clampAngle(110 + frontLeftTrim));
  frontRight.write(clampAngle(110 + frontRightTrim));

  rearLeft.write(clampAngle(70 + rearLeftTrim));
  rearRight.write(clampAngle(70 + rearRightTrim));

  delay(350);

  frontLeft.write(clampAngle(70 + frontLeftTrim));
  frontRight.write(clampAngle(70 + frontRightTrim));

  rearLeft.write(clampAngle(110 + rearLeftTrim));
  rearRight.write(clampAngle(110 + rearRightTrim));

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
