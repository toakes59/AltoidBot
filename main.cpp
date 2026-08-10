#include <Servo.h>

Servo frontLeft;
Servo frontRight;
Servo rearLeft;
Servo rearRight;

const int trigPin = 10;
const int echoPin = 11;

int distance;

void setup()
{
  frontLeft.attach(3);
  frontRight.attach(5);
  rearLeft.attach(6);
  rearRight.attach(9);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  stand();
}

void loop()
{
  distance = getDistance();

  if(distance < 15)
  {
    stopRobot();
    delay(300);

    turnRight();

    delay(300);
  }
  else
  {
    walkForward();
  }
}