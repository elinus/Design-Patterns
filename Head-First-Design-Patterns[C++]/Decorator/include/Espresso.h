#ifndef __ESPRESSO_H__
#define __ESPRESSO_H__

#include <Beverage.h>

class Espresso : public Beverage {
public:
  Espresso();
  double cost() override;
};

#endif
