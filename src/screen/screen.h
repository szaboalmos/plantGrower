#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void screen(int screenPos)
{
    if (screenPos == 0)
    {
        lcd.setCursor(0, 0);
        lcd.print("fas");
    }
    else if (screenPos == 1)
    {
        lcd.setCursor(0, 0);
        lcd.print("xdd");
    }
    else if (screenPos == 2)
    {
        lcd.setCursor(0, 0);
        lcd.print("asd");
    }
    else if (screenPos == 3)
    {
        lcd.setCursor(0, 0);
        lcd.print("dsa");
    }
    else if (screenPos == 4)
    {
        lcd.setCursor(0, 0);
        lcd.print("bna");
    }
}