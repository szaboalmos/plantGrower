#include <Arduino.h>

#include "pins/pins.h"

int getLighrSensorValue()
{
    int lightValue = analogRead(sensorLIGHT);
    return map(lightValue, 0, 1023, 0, 1000);
}