#include <OneWire.h>
#include <DS18B20.h>

#include "pins/Pins.h"

OneWire oneWire(sensorTEMP);
DS18B20 sensor(&oneWire);

float getTemperatureSensorValue()
{
    sensor.requestTemperatures();

    while (!sensor.isConversionComplete())
        ; // wait until sensor is ready
    return sensor.getTempC();
}