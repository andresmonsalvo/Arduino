int myPin=A2;
int readVal;
float V2;
int dt=250;
int redLED=9;
int greenLED=11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin, INPUT);
pinMode(redLED, OUTPUT);
pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myPin);
V2=(5./1023.)*readVal;
Serial.print("Potentioneter voltage is ");
Serial.println(V2);
if (V2<3){
  digitalWrite(redLED, LOW); 
  digitalWrite(greenLED, HIGH); 
}
if (V2>3){
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
}
delay(dt);
}
