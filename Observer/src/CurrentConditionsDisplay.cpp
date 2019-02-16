#include <CurrentConditionsDisplay.h>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData) {
  this->weatherData = weatherData;
  weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temp, float humid, float press) {
  this->temperature = temp;
  this->humidity = humid;
  display();
}

void CurrentConditionsDisplay::display() {
  std::cout << std::setprecision(2) << "Current conditions: " << temperature
            << "F degree and " << humidity << "\% humidity\n";
}
