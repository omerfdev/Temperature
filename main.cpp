#include <iostream>
#include <cstdlib>
#include <ctime>

class TemperatureSensor {
public:
    TemperatureSensor(float min_temp, float max_temp) : min_temp_(min_temp), max_temp_(max_temp) {
        srand(time(NULL));
    }

    float get_temperature() {
        // ADC değeri simülasyonu (0-1023)
        int adc_value = rand() % 1024;

        // ADC değerini sıcaklık değerine çevirme (örnek bir dönüşüm)
        float temperature = static_cast<float>(adc_value) / 1023.0 * (max_temp_ - min_temp_) + min_temp_;

        return temperature;
    }

private:
    float min_temp_;
    float max_temp_;
};

int main() {
    TemperatureSensor sensor(0, 50); // Minimum 0, maksimum 50 derece
    float temperature = sensor.get_temperature();
    std::cout << "Ortam Sıcaklığı: " << temperature << " derece Celsius" << std::endl;
    return 0;
}
