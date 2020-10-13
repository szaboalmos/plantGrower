#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include "control/light/lightControl.h"
#include "control/temperature/temperatureControl.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void screen(int screenPos)
{
    if (screenPos == 0)
    {
        lcd.setCursor(0, 0);
        lcd.print("LIGHT: " + 10);
        lcd.setCursor(0, 0);
        lcd.print("TEMPERATURE: ");
    }
    else if (screenPos == 1)
    {
        lcd.setCursor(0, 0);
        lcd.print("");
        lcd.setCursor(1, 0);
        lcd.print("");
    }
    else if (screenPos == 2)
    {
        lcd.setCursor(0, 0);
        lcd.print("");
        lcd.setCursor(1, 0);
        lcd.print("");
    }
    else if (screenPos == 3)
    {
        lcd.setCursor(0, 0);
        lcd.print("");
        lcd.setCursor(1, 0);
        lcd.print("");
    }
    else if (screenPos == 4)
    {
        lcd.setCursor(0, 0);
        lcd.print("");
        lcd.setCursor(1, 0);
        lcd.print("");
    }
}