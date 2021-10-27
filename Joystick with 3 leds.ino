int led1 = 7;
int led2 = 8;
int led3 = 9;
int x = A0;
int y = A1;
int x_pos;
int y_pos;
int sw = 2;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(x, INPUT);
pinMode(y, INPUT);
pinMode(sw,INPUT_PULLUP);}

void loop() {
x_pos = analogRead (x);
y_pos = analogRead (y);
  
if (x_pos < 400){
digitalWrite(led1, HIGH);}
    
if(x_pos > 400 && x_pos < 600){
digitalWrite(led1, LOW);}

else if (x_pos > 600){
digitalWrite(led1, HIGH);}

if (y_pos < 400){
digitalWrite(led2, HIGH);}

if(y_pos > 400 && y_pos < 600){
digitalWrite(led2, LOW);}

else if (y_pos > 600){
digitalWrite(led2, HIGH);}

if (digitalRead(sw)==HIGH){
digitalWrite(led3, LOW);}

}

