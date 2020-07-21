#include <Arduino.h>

#include "pins/pins.h"
#include "getSensorValues/light/getLightSensorValue.h"
#include "declarateVaribles/variables.h"

void lightControl()
{
    int lightVal = getLighrSensorValue();
    if (lightVal < lightOnValue - lightHysteresis)
    {
        digitalWrite(relayLED, LOW); //a relay LOW állapotban zár!!
    }
    else if (lightVal > lightOnValue)
    {
        digitalWrite(relayLED, HIGH);
    }
}