#include <Servo.h> 

Servo myservo1;  // create servo object to control a servo 
Servo myservo2;  // create servo object to control a servo 
int inputPort1 = 2;
int inputPort2 = 3;
int servo1 = 11;
int servo2 = 13;

int currentAngle1 = 180;
int targetAngle1 = 180;

int currentAngle2 = 180;
int targetAngle2 = 180;


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
  
  if(digitalRead(inputPort1))
  {
    currentAngle1 = 180;
  }
  else
  {
    currentAngle1 = 0;
  }
  
  myservo1.write(currentAngle1); 
   myservo2.write(currentAngle1);
  
  /*
  if(digitalRead(inputPort2))
  {
    currentAngle2 = 180;
  }
  else
  {
    currentAngle2 = 0;
  }*/
  

  
  //Serial.println(currentAngle);
 /* 
  if(currentAngle<targetAngle)currentAngle++;
  else if(currentAngle>targetAngle)
  {
    currentAngle--;
  }
  else if(currentAngle == targetAngle)
  {
     if(targetAngle==0)targetAngle = 180;
     else if(target  Angle==180)targetAngle = 0;
  }
  */
  
  
  
  
    
   
  
  
 // delay(5);                           // waits for the servo to get there 

 // SoftwareServo::refresh();
} 
