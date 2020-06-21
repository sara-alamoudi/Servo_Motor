#include <Servo.h>
Servo myservo1;
Servo myservo2;
int pos=0;

void setup()
{

  myservo1.attach(6);
  myservo2.attach(9);
  Serial.begin(9600);
}

void loop()
{
  for(pos=0;pos<=180;pos+=1);{
  myservo1.write(pos);
  myservo2.write(pos);
  Serial.println(pos);
  delay(1500);
}
{
  for(pos=180;pos>=0;pos-=1);{
  myservo2.write(pos);
  Serial.println(pos);
  delay(1500);
  }
}
for(pos=180;pos>=0;pos-=1);{
  myservo1.write(pos);
  Serial.println(pos);
  delay(1500);
}
}
