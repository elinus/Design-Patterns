#include <CurrentConditionsDisplay.h>
#include <ForecastDisplay.h>
#include <HeatIndexDisplay.h>
#include <StatisticsDisplay.h>
#include <WeatherData.h>

int main(int argc, char *argv[]) {
  auto *weatherData = new WeatherData();
  auto *currentDisplay = new CurrentConditionsDisplay(weatherData);
  auto *statsDisplay = new StatisticsDisplay(weatherData);
  auto *forcastDisplay = new ForecastDisplay(weatherData);
  auto *heatIndex = new HeatIndexDisplay(weatherData);

  weatherData->setMeasurements(80, 65, 30.4f);
  weatherData->setMeasurements(82, 70, 29.2f);
  weatherData->setMeasurements(78, 90, 29.2f);

  delete currentDisplay;
  delete statsDisplay;
  delete forcastDisplay;
  delete heatIndex;

  return 0;
}
