#ifndef __DUCK_H__
#define __DUCK_H__

#include <FlyBehaviour.h>
#include <QuackBehaviour.h>
#include <iostream>
#include <memory>

class Duck {
public:
  Duck();
  virtual ~Duck();
  virtual void display() = 0;
  void performFly();
  void performQuack();
  void swim();
  void setFlyBehaviour(std::unique_ptr<FlyBehaviour> fb);
  void setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb);

protected:
  std::unique_ptr<FlyBehaviour> flyBehaviour;
  std::unique_ptr<QuackBehaviour> quackBehaviour;
};

#endif
