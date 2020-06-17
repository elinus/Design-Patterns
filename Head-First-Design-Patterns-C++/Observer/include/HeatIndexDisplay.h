#ifndef __HEAT_INDEX_DISPLAY_H__
#define __HEAT_INDEX_DISPLAY_H__

#include <DisplayElement.h>
#include <Observer.h>
#include <Subject.h>

#include <iostream>

class HeatIndexDisplay : public Observer, public DisplayElement {
public:
  HeatIndexDisplay(Subject *weatherData);
  void update(float temperature, float humidity, float pressure) override;
  void display() override;

private:
  float computeHeatIndex(float t, float rh);
  float heatIndex = 0.0f;
  Subject *weatherData;
};

#endif
