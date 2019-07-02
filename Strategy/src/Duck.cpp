#include <Duck.h>

Duck::Duck() = default;

Duck::~Duck() = default;

void Duck::swim() { std::cout << "All ducks float, even decoys!" << std::endl; }

void Duck::performFly() { flyBehaviour->fly(); }

void Duck::performQuack() { quackBehaviour->quack(); }

void Duck::setFlyBehaviour(std::unique_ptr<FlyBehaviour> fb) {
  flyBehaviour = std::move(fb);
}

void Duck::setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb) {
  quackBehaviour = std::move(qb);
}
