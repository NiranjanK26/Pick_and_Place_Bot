#include <SoftwareSerial.h>
#include <Servo.h>
Servo myservo1, myservo2, myservo3;

int bluetoothTx = 1;
int bluetoothRx = 0;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup()
{
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(6);
 
  
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop()
{
  if(bluetooth.available()>= 10)
  {
    int servopos = bluetooth.read();
    int realservo = servopos;
   if(realservo >= 40 && realservo <100) {
      int servo1 = realservo;
      servo1 = map(servo1, 40, 100, 0, 90);
      myservo1.write(servo1);
      Serial.println("Servo1 ON");
      delay(10);
    }
    
    if(realservo >= 102 && realservo <200) {
      int servo2 = realservo;
      servo2 = map(servo2, 102, 200, 0, 90);
      myservo2.write(servo2);
      Serial.println("Servo2 ON");
      delay(10);
    }
     if(realservo >= 202 && realservo <250) {
      int servo3 = realservo;
      servo3 = map(servo3, 202, 220, 0, 60);
      myservo3.write(servo3);
      Serial.println("Servo3 ON");
      delay(10);
    }
    
    
  }
}
