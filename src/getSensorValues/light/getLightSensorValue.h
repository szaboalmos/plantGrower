
#include "pins/Pins.h"

int getLightSensorValue(int lightSensor)
{
    int lightVal = analogRead(lightSensor);
    return map(lightVal, 0, 1023, 0, 1000);
}