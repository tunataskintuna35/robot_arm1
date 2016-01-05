#include <Servo.h>

Servo servo1;                       //gripper servosu
Servo servo2;                       //1. eklem 
Servo servo3;                       //2. eklem

int sharp1=A0;
int sharp2=A1;
int sharp3=A2;int 
int motorPin1 = 3;
int motorPin2 = 4;
int motorPin3 = 5;
int motorPin4 = 6;
int delayTime = 500;


float _sharp1;
float _sharp2;
float _sharp3;
float volts;
float cm;

#define VOLTS_PER_UNIT    .0049F  


int pos = 0;    // variable to store the servo position

void setup() 
{
  Serial.begin(9600);
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  konum_al();
}

void loop() 
{   
    float temp=lenght(_sharp1);
    _sharp1=analogRead(sharp1);
    _sharp2=analogRead(sharp2);
    _sharp3=analogRead(sharp3);
  
    if(_sharp1<=5||_sharp2<=7||_sharp<=10)
          engel_kaldır();  
    _sharp1=analogRead(sharp1);
    _sharp2=analogRead(sharp2);
    _sharp3=analogRead(sharp3);
  
  
    float temp=lenght(_sharp1);
    
  //--------------------------------------------------------------------------------------------------------
}
void konum_al()
{
  gripper_off();
  
}
void engel_kaldir()
{
  gripper_on();
  arm_down();
  eklem_down();
  //step motor ekle
  delay(100);
  
}
void geri_gel()
{
  
}

void gripper_on()
{
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 30ms for the servo to reach the position
  }
}

void gripper_off()
{
   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 30ms for the servo to reach the position
  }
}
void arm_up()
{
  for (int temp = 180; temp >= 0; temp -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo2.write(temp);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 30ms for the servo to reach the position
  }
}
void arm_down()
{
  for (int temp = 0; temp <= 180; temp += 1) 
  { // goes from 180 degrees to 0 degrees
    servo2.write(temp);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 30ms for the servo to reach the position
  }
}
void eklem_up()
{
 for (int temp = 0; temp <= 180; temp += 1) 
  { // goes from 180 degrees to 0 degrees
    servo3.write(temp);              // tell servo to go to position in variable 'pos'
    delay(30);         
}
}
void eklem_down()
{
  for (int temp = 180; temp >= 0; temp -= 1) 
  { // goes from 180 degrees to 0 degrees
    servo3.write(temp);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 30ms for the servo to reach the position
  }
}
float lenght(float voltage)
{
    volts=(float)voltage * VOLTS_PER_UNIT;
    cm=60.495 * pow(volts,-1.1904);
    return cm;
}

