#include <MallardDuck.h>

MallardDuck::MallardDuck() {
  quackBehaviour = std::unique_ptr<QuackBehaviour>(new Quack());
  flyBehaviour = std::unique_ptr<FlyBehaviour>(new FlyWithWings());
}

MallardDuck::~MallardDuck() {
  // delete quackBehaviour;
  // delete flyBehaviour;
}

void MallardDuck::display() {
  std::cout << "I'm a real Mallard duck" << std::endl;
}
