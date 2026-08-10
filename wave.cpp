#include "AltoidBot.h"

void wave()
{
  // Shift weight onto the other three legs to lean the body toward the front-right,
  // freeing that leg to lift and wave.
  frontLeft.write(clampAngle(110 + frontLeftTrim));
  rearLeft.write(clampAngle(110 + rearLeftTrim));
  rearRight.write(clampAngle(70 + rearRightTrim));

  delay(400);

  for (int i = 0; i < 3; i++)
  {
    frontRight.write(clampAngle(105 + frontRightTrim));
    delay(200);

    frontRight.write(clampAngle(150 + frontRightTrim));
    delay(200);
  }

  frontRight.write(clampAngle(90 + frontRightTrim));
  delay(200);

  stand();
  delay(300);
}
