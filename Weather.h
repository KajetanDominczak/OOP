#ifndef WEATHER_H
#define WEATHER_H

#include <iostream>
#include <string>

class Weather {
protected:
    float temperature;
    float humidity;
    float windSpeed;

public:
    Weather(float temp, float hum, float wind) : temperature(temp), humidity(hum), windSpeed(wind) {}
    virtual void displayWeather() = 0;
    virtual std::string getWeatherAlert() = 0;
    virtual ~Weather() {}
};

class Sunny : public Weather {
private:
    int uvIndex;

public:
    Sunny(float temp, float hum, float wind, int uv) : Weather(temp, hum, wind), uvIndex(uv) {}
    void displayWeather() override {
        std::cout << "Sunny weather: Temp=" << temperature << " Humidity=" << humidity << " WindSpeed=" << windSpeed << " UV Index=" << uvIndex << std::endl;
    }
    std::string getWeatherAlert() override {
        return uvIndex > 8 ? "High UV index alert!" : "No alerts.";
    }
};

class Rainy : public Weather {
private:
    float precipitation;

public:
    Rainy(float temp, float hum, float wind, float precip) : Weather(temp, hum, wind), precipitation(precip) {}
    void displayWeather() override {
        std::cout << "Rainy weather: Temp=" << temperature << " Humidity=" << humidity << " WindSpeed=" << windSpeed << " Precipitation=" << precipitation << std::endl;
    }
    std::string getWeatherAlert() override {
        return precipitation > 50 ? "Heavy rain alert!" : "No alerts.";
    }
};

class Snowy : public Weather {
private:
    float snowfall;

public:
    Snowy(float temp, float hum, float wind, float snow) : Weather(temp, hum, wind), snowfall(snow) {}
    void displayWeather() override {
        std::cout << "Snowy weather: Temp=" << temperature << " Humidity=" << humidity << " WindSpeed=" << windSpeed << " Snowfall=" << snowfall << std::endl;
    }
    std::string getWeatherAlert() override {
        return snowfall > 20 ? "Heavy snowfall alert!" : "No alerts.";
    }
};

class Cloudy : public Weather {
public:
    Cloudy(float temp, float hum, float wind) : Weather(temp, hum, wind) {}
    void displayWeather() override {
        std::cout << "Cloudy weather: Temp=" << temperature << " Humidity=" << humidity << " WindSpeed=" << windSpeed << std::endl;
    }
    std::string getWeatherAlert() override {
        return "No alerts.";
    }
};

class Windy : public Weather {
public:
    Windy(float temp, float hum, float wind) : Weather(temp, hum, wind) {}
    void displayWeather() override {
        std::cout << "Windy weather: Temp=" << temperature << " Humidity=" << humidity << " WindSpeed=" << windSpeed << std::endl;
    }
    std::string getWeatherAlert() override {
        return windSpeed > 30 ? "High wind speed alert!" : "No alerts.";
    }
};

class Stormy : public Weather {
private:
    int thunderstormProbability;

public:
    Stormy(float temp, float hum, float wind, int thunderProb) : Weather(temp, hum, wind), thunderstormProbability(thunderProb) {}
    void displayWeather() override {
        std::cout << "Stormy weather: Temp=" << temperature << " Humidity=" << humidity << " WindSpeed=" << windSpeed << " Thunderstorm Probability=" << thunderstormProbability << "%" << std::endl;
    }
    std::string getWeatherAlert() override {
        return thunderstormProbability > 50 ? "High thunderstorm probability alert!" : "No alerts.";
    }
};

#endif // WEATHER_H
