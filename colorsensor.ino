#include <Adafruit_TCS34725.h>

Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(9600);
  tcs.begin();
}

void loop() {
  uint16_t r, g, b, c;
  tcs.getRawData(&r, &g, &b, &c);
  Serial.print("R: "); Serial.print(r, DEC);
  Serial.print(" G: "); Serial.print(g, DEC);
  Serial.print(" B: "); Serial.print(b, DEC);
  Serial.print(" C: "); Serial.println(c, DEC);
  delay(1000);
}
