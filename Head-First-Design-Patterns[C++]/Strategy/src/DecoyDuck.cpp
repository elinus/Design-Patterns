#include <DecoyDuck.h>

DecoyDuck::DecoyDuck() {
  quackBehaviour = std::unique_ptr<QuackBehaviour>(new MuteQuack());
  flyBehaviour = std::unique_ptr<FlyBehaviour>(new FlyNoWay());
  // quackBehaviour = new MuteQuack();
  // flyBehaviour = new FlyNoWay();
}

DecoyDuck::~DecoyDuck() {
  // delete quackBehaviour;
  // delete flyBehaviour;
}

void DecoyDuck::display() { std::cout << "I'm a decoy duck" << std::endl; }
