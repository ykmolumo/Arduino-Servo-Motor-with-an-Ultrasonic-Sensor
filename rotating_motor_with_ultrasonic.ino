# include <Servo.h>

Servo myservo;
const int servopin = 9;

void setup(){
  myservo.attach(servopin);
}

void loop(){
  myservo.write(180);
  delay(1000);
  myservo.write(0);
  delay(1000);
}
