#include <Servo.h> 

Servo myservo1;  // create servo object to control a servo 
Servo myservo2;  // create servo object to control a servo 
int inputPort1 = 2;
int inputPort2 = 3;
int servo1 = 9;
int servo2 = 11;

int currentAngle1 = 90;
int targetAngle1 = 90;

int currentAngle2 = 90;
int targetAngle2 = 90;


void setup() 
{ 
  myservo1.attach(servo1);  // attaches the servo on pin 2 to the servo object 
  myservo2.attach(servo2);
   pinMode(inputPort1, INPUT);
   pinMode(inputPort2, INPUT);
   
} 


void loop() 
{ 
  //val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  //val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
                 // sets the servo position according to the scaled value 
 // Serial.println(currentAngle1);
  if(digitalRead(inputPort1))
  {
    currentAngle1 = 45;
    currentAngle2 = 115;
   // Serial.println(currentAngle1);
  }
  else
  {
    currentAngle1 = 115;
     currentAngle2 = 45;
     //Serial.println(currentAngle1);
  }
  
  myservo1.write(currentAngle1); 
  myservo2.write(currentAngle2);
  
} 
