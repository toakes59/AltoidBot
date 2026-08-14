#include "AltoidBot.h"

void jump()
{
  sit();
  delay(300);

  frontLeft.write(clampAngle(60 + frontLeftTrim));
  frontRight.write(clampAngle(120 + frontRightTrim));
  rearLeft.write(clampAngle(150 + rearLeftTrim));
  rearRight.write(clampAngle(30 + rearRightTrim));

  delay(150);

  stand();
}
