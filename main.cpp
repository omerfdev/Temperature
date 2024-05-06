#include <iostream>
#include "temperature_sensor.h"

int main() {
    // Rastgele sayı üreteci için tohumlama
    srand(time(NULL));

    // Sıcaklık sensörü örneği oluştur
    TemperatureSensor sensor;

    // Sıcaklık ölçümü yap ve ekrana yazdır
    float temperature = sensor.get_temperature();
    std::cout << "Ortam Sıcaklığı: " << temperature << " derece Celsius" << std::endl;

    return 0;
}
