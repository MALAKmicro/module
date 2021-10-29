int ENA = 3;
int IN1 = 9;
int IN2 = 10;
int IN3 = 11;
int IN4 = 12;
int ENB = 5;
int x = A0;
int y = A1;
int sw = 2;
int x_pos;
int y_pos;
void setup() {
pinMode(ENA, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(ENB, OUTPUT);
analogWrite(ENA, 150);
analogWrite(ENB, 150);
pinMode (x, INPUT);
pinMode (y, INPUT);
pinMode (sw,INPUT_PULLUP);
}

void loop() {

x_pos = analogRead (x);
y_pos = analogRead (y);
  
if (x_pos < 400){
digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);}

else if (x_pos > 600){
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);}

if (y_pos < 400){
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);}

else if (y_pos > 600){
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);}

if (digitalRead(sw)==LOW){
digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);}

}

