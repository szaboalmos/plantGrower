#include <Arduino.h>

#include "getSensorValues/temperature/getTemperatureSensorValue.h"
#include "pins/pins.h"
#include "declarateVaribles/variables.h"


void temperatureControl()
{
    float tempVal = getTemperatureSensorValue();

    if (tempVal < temperatureOnValue - temperatureHysteresis)
    {
        digitalWrite(relayINFRA, LOW);
    }
    else if (tempVal > temperatureOnValue)
    {
        digitalWrite(relayINFRA, HIGH);
    }
}