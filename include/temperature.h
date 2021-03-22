#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include <DHT.h>
#include <DHT_U.h>

#define DHTTYPE DHT11
#define DHTPIN 2

extern sensors_event_t event;
extern sensor_t sensor;
extern uint32_t delayMS;

void sensorInit();
void sendInfos();

#endif // TEMPERATURE_H_
