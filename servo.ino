#include <Servo.h>

Servo myservo;
Servo servo2;


int pos = 0;    // variable to store the servo position

void setup() 
{
  myservo.attach(10);
  servo2.attach(9);
}

void loop() 
{
    gripper_on();
    arm_down();
    gripper_off();
    arm_on();
 
}

void gripper_on()
{
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

void gripper_off()
{
   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
void arm_up()
{
  for (int temp = 180; temp >= 0; temp -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo2.write(temp);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
void arm_down()
{
  for (int temp = 0; temp <= 180; temp += 1) 
  { // goes from 180 degrees to 0 degrees
    servo2.write(temp);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
