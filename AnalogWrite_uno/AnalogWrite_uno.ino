int redLED=9;
int bright=127;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redLED,bright);
}
