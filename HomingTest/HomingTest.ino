#include <Servo.h>

Servo frontLeft;
Servo frontRight;
Servo rearLeft;
Servo rearRight;

void setup()
{
  frontLeft.attach(3);
  frontRight.attach(5);
  rearRight.attach(6);
  rearLeft.attach(9);

  frontLeft.write(90);
  frontRight.write(90);
  rearLeft.write(90);
  rearRight.write(90);

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Blink slowly so you can tell the sketch is still running and holding
  // all four servos at their 90-degree home position while you attach horns.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
