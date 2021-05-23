/*
 * Data types demo for uint32_t and unit8_t
 */

// int x;                    // an int is equal to 16 bits
// int sensor_data[1000];   // 1000 elements in array, this takes 18% of 256 Kb RAM memory, Flash / ROM memory is 1MB

uint32_t x;
uint8_t sensor_data[1000];   // uses 17% of RAM, a slight improvement

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  sensor_data[x++]=x;

}
