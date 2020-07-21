//librays
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

//headers
//#include "getSensorValues/temperature/getTemperatureSensorValue.h"
#include "pins/pinDeclaration.h"
#include "control/light/lightControl.h"
#include "control/temperature/temperatureControl.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  sensor.begin();
  lcd.init();
  lcd.backlight();
  pinDeclaration();
}

void loop()
{
  lcd.setCursor(2, 0);
  lcd.print(getTemperatureSensorValue());
  lcd.setCursor(2, 1);
  lcd.print(getLighrSensorValue());
  lightControl();
  temperatureControl();
}