#include <RubberDuck.h>

RubberDuck::RubberDuck() {
  quackBehaviour = std::unique_ptr<QuackBehaviour>(new Squeak());
  flyBehaviour = std::unique_ptr<FlyBehaviour>(new FlyNoWay());
  // quackBehaviour = new Squeak();
  // flyBehaviour = new FlyNoWay();
}

RubberDuck::~RubberDuck() {
  // delete quackBehaviour;
  // delete flyBehaviour;
}

void RubberDuck::display() { std::cout << "I'm a rubber duck" << std::endl; }
