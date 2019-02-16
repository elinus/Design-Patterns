#include <Duck.h>

Duck::Duck() = default;

Duck::~Duck() = default;

void Duck::swim() { std::cout << "All ducks float, even decoys!" << std::endl; }

void Duck::performFly() { flyBehaviour->fly(); }

void Duck::performQuack() { quackBehaviour->quack(); }

void Duck::setFlyBehaviour(FlyBehaviour *fb) {
  if (this->flyBehaviour != nullptr) {
    delete flyBehaviour;
  }
  flyBehaviour = fb;
}

void Duck::setQuackBehaviour(QuackBehaviour *qb) {
  if (this->quackBehaviour != nullptr) {
    delete quackBehaviour;
  }
  quackBehaviour = qb;
}
