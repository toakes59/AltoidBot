#include "AltoidBot.h"

void wave()
{
  // Shift weight onto the other three legs to lean the body toward the front-right,
  // freeing that leg to lift and wave.
  frontLeft.write(70);
  rearLeft.write(70);
  rearRight.write(110);

  delay(400);

  for (int i = 0; i < 3; i++)
  {
    frontRight.write(40);
    delay(200);

    frontRight.write(140);
    delay(200);
  }

  frontRight.write(90);
  delay(200);

  stand();
  delay(300);
}
