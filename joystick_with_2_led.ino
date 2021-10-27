int led1 = 7;
int led2 = 8;
int x = A0;
int y = A1;
int x_pos;
int y_pos;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(x, INPUT);
pinMode(y, INPUT);}

void loop() {
x_pos = analogRead (x);
y_pos = analogRead (y);
  
if (x_pos < 400){
digitalWrite(led1, HIGH);}

else if (x_pos > 600){
digitalWrite(led1, HIGH);}

if (y_pos < 400){
digitalWrite(led2, HIGH);}

else if (y_pos > 600){
digitalWrite(led2, HIGH);}
}
