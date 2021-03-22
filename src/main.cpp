#include <Arduino.h>

#include "ble.h"
#include "temperature.h"

void setup()
{
    Serial.begin(9600);
    sensorInit();
    bleInit();
}

void loop()
{
    sendInfos();
    delay(delayMS);
}
