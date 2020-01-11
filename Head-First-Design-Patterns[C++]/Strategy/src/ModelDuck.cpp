#include <ModelDuck.h>

ModelDuck::ModelDuck() {
  quackBehaviour = std::unique_ptr<QuackBehaviour>(new Quack());
  flyBehaviour = std::unique_ptr<FlyBehaviour>(new FlyNoWay());
  // quackBehaviour = new Quack();
  // flyBehaviour = new FlyNoWay();
}

ModelDuck::~ModelDuck() {
  // delete quackBehaviour;
  // delete flyBehaviour;
}

void ModelDuck::display() { std::cout << "I'm a model duck" << std::endl; }
