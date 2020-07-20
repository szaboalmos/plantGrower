#include <Arduino.h>

#include "pins/pins.h"

void lightControl(){
    int lightVal = analogRead(sensorLIGHT);
    if(lightVal < 400){
        digitalWrite(relayLED, HIGH);
    } else if(lightVal > 600) {
        digitalWrite(relayLED, LOW);
    }
}