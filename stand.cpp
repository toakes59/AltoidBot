#include "AltoidBot.h"

void stand()
{
  frontLeft.write(90);
  frontRight.write(90);
  rearLeft.write(90);
  rearRight.write(90);
}

void sit()
{
  // Fold the legs further than a walking stride so the body lowers to the ground.
  // Mirrors the diagonal-pair convention used in walkForward() — tune these on the
  // real hardware, the exact angles depend on how the leg horns are mounted.
  frontLeft.write(40);
  rearRight.write(40);

  frontRight.write(140);
  rearLeft.write(140);
}
