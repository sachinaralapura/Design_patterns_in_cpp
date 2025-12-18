#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <thread>
using namespace std;

using WeatherMap = map<string, int>;

void printChar(char sym, int n) {
  for (int i = 0; i < n; i++) {
    cout << sym;
    this_thread::sleep_for(100ms);
  }
}

void RefreshWeatherData(WeatherMap forecast) {
  while (true) {
    for (auto &item : forecast) {
      item.second++;
      cout << item.first << " - " << item.second << endl;
    }
    std::this_thread::sleep_for(2000ms);
  }
}

int main() {
  const WeatherMap Forecast = {
      {"New York", 23}, {"Mumbai", 34}, {"Bengaluru", 40}, {"Kolkata", 33}};

  thread bgWorkder(RefreshWeatherData, Forecast);

  printChar('+', 1000);

  bgWorkder.join();
  return 0;
}
