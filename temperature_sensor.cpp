#include "temperature_sensor.h"
#include <cstdlib> // rand() fonksiyonu için
#include <ctime>   // time() fonksiyonu için

float TemperatureSensor::get_temperature() {
    // 0 ila 40 arasında rastgele bir sıcaklık üret
    return (rand() % 400) / 10.0f;
}
