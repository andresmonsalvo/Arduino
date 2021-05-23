int redLED=13;
int greenLED=8;
float pi=3.14;
int dit=100;
int dah=500;
int longW=1000;

String myName="Andres";

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);delay(dit);
digitalWrite(redLED,LOW);delay(dit);
digitalWrite(redLED,HIGH);delay(dit);
digitalWrite(redLED,LOW);delay(dit);
digitalWrite(redLED,HIGH);delay(dit);
digitalWrite(redLED,LOW);delay(dit);delay(longW);

digitalWrite(greenLED,HIGH);delay(dah);
digitalWrite(greenLED,LOW);delay(dah);
digitalWrite(greenLED,HIGH);delay(dah);
digitalWrite(greenLED,LOW);delay(dah);
digitalWrite(greenLED,HIGH);delay(dah);
digitalWrite(greenLED,LOW);delay(dah);delay(longW);

digitalWrite(redLED,HIGH);delay(dit);
digitalWrite(redLED,LOW);delay(dit);
digitalWrite(redLED,HIGH);delay(dit);
digitalWrite(redLED,LOW);delay(dit);
digitalWrite(redLED,HIGH);delay(dit);
digitalWrite(redLED,LOW);delay(dit);delay(longW);
}
