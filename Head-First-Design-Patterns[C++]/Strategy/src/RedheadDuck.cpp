#include <RedheadDuck.h>

RedheadDuck::RedheadDuck() {
  quackBehaviour = std::unique_ptr<QuackBehaviour>(new Quack());
  flyBehaviour = std::unique_ptr<FlyBehaviour>(new FlyWithWings());
  // quackBehaviour = new Quack();
  // flyBehaviour = new FlyWithWings();
}

RedheadDuck::~RedheadDuck() {
  // delete quackBehaviour;
  // delete flyBehaviour;
}

void RedheadDuck::display() { std::cout << "I'm a red head duck" << std::endl; }
