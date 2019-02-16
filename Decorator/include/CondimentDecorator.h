#ifndef __CONDIMENT_DECORATOR_H__
#define __CONDIMENT_DECORATOR_H__

#include <Beverage.h>

class CondimentDecorator : public Beverage {
public:
  std::string getDescription() override = 0;
};

#endif
