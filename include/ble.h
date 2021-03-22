#ifndef BLE_H_
#define BLE_H_

#define SERVICE_UUID "1457c5e3-60bd-4bd0-a89d-9d9ae63f51d0"
#define CHARACTERISTIC_UUID "c4df4f72-78c8-4a39-ace4-3371c164329f"

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

extern BLECharacteristic *pCharacteristic;

void bleInit();

#endif // BLE_H_
