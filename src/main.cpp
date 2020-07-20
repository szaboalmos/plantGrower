//librays
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>


//headers
#include "getSensorValues/temperature/getTemperatureSensorValue.h"
#include "getSensorValues/light/getLightSensorValue.h"




LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  sensor.begin();
  lcd.init();
  lcd.backlight();
}

void loop()
{
  lcd.setCursor(2, 0);
  lcd.print(getTemperatureSensorValue());
  lcd.setCursor(2, 1);
  lcd.print(analogRead(sensorTEMP));
}