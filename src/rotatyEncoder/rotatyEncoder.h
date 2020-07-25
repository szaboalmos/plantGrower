#include <Arduino.h>

#include "pins/pins.h"


int encoder0PinALast = LOW;
int n = LOW;

int rotatyEncoder(int encoder0Pos)
{
    n = digitalRead(rotatyEncoder1CLK);
    if ((encoder0PinALast == LOW) && (n == HIGH))
    {
        if (digitalRead(rotatyEncoder1DT) == LOW)
        {
            encoder0Pos--;
        }
        else
        {
            encoder0Pos++;
        }
    }
    encoder0PinALast = n;
    return encoder0Pos;
}