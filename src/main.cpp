//librays
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

//headers
//#include "getSensorValues/temperature/getTemperatureSensorValue.h"
#include "screen/screen.h "
#include "pins/pinDeclaration.h"
#include "control/light/lightControl.h"
#include "control/temperature/temperatureControl.h"
#include "rotatyEncoder/rotatyEncoder.h"
#include "rotatyEncoder/rotatyVariables.h"

void setup()
{
  sensor.begin();
  lcd.init();
  lcd.backlight();
  pinDeclaration();
}

void loop()
{
  rotatayDat = rotatyEncoder(rotatayDat);
  screen(rotatayDat / 4);
}