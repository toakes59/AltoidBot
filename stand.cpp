#include "AltoidBot.h"

void stand()
{
  frontLeft.write(clampAngle(90 + frontLeftTrim));
  frontRight.write(clampAngle(90 + frontRightTrim));
  rearLeft.write(clampAngle(90 + rearLeftTrim));
  rearRight.write(clampAngle(90 + rearRightTrim));
}

void sit()
{
  // Front legs fold back a little, rear legs fold further, lowering the rear
  // of the body while the front stays more upright.
  frontLeft.write(clampAngle(105 + frontLeftTrim));
  frontRight.write(clampAngle(75 + frontRightTrim));

  rearLeft.write(clampAngle(30 + rearLeftTrim));
  rearRight.write(clampAngle(150 + rearRightTrim));
}

void layDown()
{
  // Fold the legs further than a walking stride so the body lowers to the ground.
  frontLeft.write(clampAngle(180 + frontLeftTrim));
  rearRight.write(clampAngle(180 + rearRightTrim));

  frontRight.write(clampAngle(0 + frontRightTrim));
  rearLeft.write(clampAngle(0 + rearLeftTrim));
}
