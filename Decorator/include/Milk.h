#ifndef __MILK_H__
#define __MILK_H__

#include <CondimentDecorator.h>

class Milk : public CondimentDecorator {
public:
  Milk(Beverage *beverage);
  std::string getDescription() override;
  double cost() override;

private:
  Beverage *beverage;
};

#endif
