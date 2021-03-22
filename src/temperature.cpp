#include "temperature.h"
#include "ble.h"
#include "dtoa.h"

DHT_Unified dht(DHTPIN, DHTTYPE);
sensors_event_t event;
sensor_t sensor;
uint32_t delayMS;

void sensorInit()
{
    dht.begin();
    dht.temperature().getSensor(&sensor);
    dht.humidity().getSensor(&sensor);
    delayMS = sensor.min_delay / 1000;
}

void sendInfos()
{
    std::string body = "";

    dht.temperature().getEvent(&event);
    if (!isnan(event.temperature))
    {
        body.append("T:" + dtoa(event.temperature));
        Serial.printf("Temperature: %f\n", event.temperature);
    }

    dht.humidity().getEvent(&event);
    if (!isnan(event.relative_humidity))
    {
        body.append(";H:" + dtoa(event.relative_humidity));
        Serial.printf("Humidity: %f\n", event.relative_humidity);
    }

    pCharacteristic->setValue(body);
}
