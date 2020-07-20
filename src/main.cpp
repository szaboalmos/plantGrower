//librays
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

//headers
#include "getSensorValues/temperature/getTemperatureSensorValue.h"
#include "pins/pinDeclaration.h"
#include "control/light/lightControl.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  sensor.begin();
  lcd.init();
  lcd.backlight();
  pinDeclaration();
}

void loop()
{
  lcd.setCursor(2, 0);
  lcd.print("sdf");
  lcd.setCursor(2, 1);
  lcd.print(analogRead(sensorLIGHT));
  lightControl();
}