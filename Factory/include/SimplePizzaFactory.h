#ifndef __SIMPLE_PIZZA_FACTORY_H__
#define __SIMPLE_PIZZA_FACTORY_H__

#include <CheesePizza.h>
#include <ClamPizza.h>
#include <PepperoniPizza.h>
#include <Pizza.h>
#include <VeggiePizza.h>
#include <string>

class SimplePizzaFactory {
public:
  Pizza *createPizza(std::string type);
};

#endif // !__SIMPLE_PIZZA_FACTORY_H__
