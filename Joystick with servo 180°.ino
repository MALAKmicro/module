#include <Servo.h>
Servo servo1;
int x = A0;
int y = A1;
int sw = 2;
int x_pos;
int y_pos;
void setup() {
pinMode (x, INPUT);
pinMode (y, INPUT);
pinMode(sw,INPUT_PULLUP);
 servo1.attach(7);}

void loop() {
x_pos = analogRead (x);
y_pos = analogRead (y);
  
if (x_pos < 400){
servo1.write(0);}

else if (x_pos > 600){
servo1.write(180);}

if (y_pos < 400){
servo1.write(0);}

else if (y_pos > 600){
servo1.write(180);}

if (digitalRead(sw)==HIGH){
servo1.write(90);}
}

