

float celsius = 0;
float fahrenheit = 0;
//float temperature = HTS.readTemperature();

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
}
void findTemps(){
  float voltage = 0;
  float sensor = 0;
  sensor = analogRead(0);
  voltage = (sensor * 5000) / 1024; // convert the raw sensor value to millivolts
  voltage = voltage - 500; // remove the voltage offset
  celsius = (voltage / 10) + 10 - 396; // convert millivolts to Celsius
  fahrenheit = (1.8 * celsius) + 32; // convert Celsius to Fahrenheit
}
void displayTemps()
{
Serial.print("Temperature is ");
Serial.print(celsius, 2);
Serial.print(" deg. C / ");
Serial.print(fahrenheit, 2);
Serial.println(" deg. F");
// use .println here so the next reading starts on a new line
}
void loop()
{
findTemps();
displayTemps();
delay(5000);
}
