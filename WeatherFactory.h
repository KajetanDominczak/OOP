#ifndef WEATHERFACTORY_H
#define WEATHERFACTORY_H

#include "Weather.h"
#include <string>

class WeatherFactory {
public:
    static Weather* createWeather(const std::string& type, float temp, float hum, float wind, float additional = 0) {
        if (type == "Sunny") {
            return new Sunny(temp, hum, wind, static_cast<int>(additional));
        } else if (type == "Rainy") {
            return new Rainy(temp, hum, wind, additional);
        } else if (type == "Snowy") {
            return new Snowy(temp, hum, wind, additional);
        } else if (type == "Cloudy") {
            return new Cloudy(temp, hum, wind);
        } else if (type == "Windy") {
            return new Windy(temp, hum, wind);
        } else if (type == "Stormy") {
            return new Stormy(temp, hum, wind, static_cast<int>(additional));
        } else {
            return nullptr;
        }
    }
};

#endif // WEATHERFACTORY_H
