#include<Servo.h>
Servo m1, m2, m3, m4;
int g1=2, g2=4, g3=7, g4=8;

void setup(){
  pinMode(g1, OUTPUT);
  digitalWrite(g1, LOW);
  pinMode(g2, OUTPUT);
  digitalWrite(g2, LOW);
  pinMode(g3, OUTPUT);
  digitalWrite(g3, LOW);
  pinMode(g4, OUTPUT);
  digitalWrite(g4, LOW);
  
  m1.attach(6);
  m1.write(30);

  m2.attach(9);
  m2.write(30);

  m3.attach(10);
  m3.write(30);

  m4.attach(11);
  m4.write(30);
  
  delay(3000);
}

void loop(){
  //myServo.write(70);
  
  //m1.write(70);
  //m2.write(70);
  //m3.write(70);
  //m4.write(70);
  
  delay(15);
}
