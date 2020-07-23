// CONNECTIONS:
// DS1302 CLK/SCLK --> 5
// DS1302 DAT/IO --> 4
// DS1302 RST/CE --> 2
// DS1302 VCC --> 3.3v - 5v
// DS1302 GND --> GND

#include <Arduino.h>

#include "ArduinoRTC/virtuabotixRTC.h"
#include "pins/pins.h"

virtuabotixRTC myRTC(rtcCLK, rtcDAT, rtcRST);

void forSetup()
{
    myRTC.setDS1302Time(00, 59, 23, 6, 10, 1, 2014);
}

void forLoop()
{
    myRTC.updateTime();                    //|
                                           //|
                                           // Start printing elements as individuals                                                                //|
    Serial.print("Current Date / Time: "); //|
    Serial.print(myRTC.dayofmonth);        //|
    Serial.print("/");                     //|
    Serial.print(myRTC.month);             //|
    Serial.print("/");                     //|
    Serial.print(myRTC.year);              //|
    Serial.print("  ");                    //|
    Serial.print(myRTC.hours);             //|
    Serial.print(":");                     //|
    Serial.print(myRTC.minutes);           //|
    Serial.print(":");                     //|
    Serial.println(myRTC.seconds);
}
