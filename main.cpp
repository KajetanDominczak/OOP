#include "WeatherFactory.h"

int main() {
    Weather* sunny = WeatherFactory::createWeather("Sunny", 30.0, 50.0, 5.0, 9);
    Weather* rainy = WeatherFactory::createWeather("Rainy", 20.0, 90.0, 10.0, 60);
    Weather* snowy = WeatherFactory::createWeather("Snowy", -5.0, 80.0, 15.0, 25);
    Weather* cloudy = WeatherFactory::createWeather("Cloudy", 15.0, 70.0, 8.0);
    Weather* windy = WeatherFactory::createWeather("Windy", 22.0, 65.0, 35.0);
    Weather* stormy = WeatherFactory::createWeather("Stormy", 18.0, 85.0, 20.0, 75);

    sunny->displayWeather();
    std::cout << sunny->getWeatherAlert() << std::endl;

    rainy->displayWeather();
    std::cout << rainy->getWeatherAlert() << std::endl;

    snowy->displayWeather();
    std::cout << snowy->getWeatherAlert() << std::endl;

    cloudy->displayWeather();
    std::cout << cloudy->getWeatherAlert() << std::endl;

    windy->displayWeather();
    std::cout << windy->getWeatherAlert() << std::endl;

    stormy->displayWeather();
    std::cout << stormy->getWeatherAlert() << std::endl;

    delete sunny;
    delete rainy;
    delete snowy;
    delete cloudy;
    delete windy;
    delete stormy;

    return 0;
}
