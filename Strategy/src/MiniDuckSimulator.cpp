#include <DecoyDuck.h>
#include <FlyRocketPowered.h>
#include <MallardDuck.h>
#include <ModelDuck.h>
#include <RedheadDuck.h>
#include <RubberDuck.h>
#include <iostream>

int main() {
  Duck *duck;
  auto *mallard = new MallardDuck();
  duck = mallard;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  auto *redhead = new RedheadDuck();
  duck = redhead;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  auto *rubber = new RubberDuck();
  duck = rubber;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  auto *decoy = new DecoyDuck();
  duck = decoy;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  auto *model = new ModelDuck();
  duck = model;
  duck->performFly();
  duck->setFlyBehaviour(new FlyRocketPowered());
  duck->performFly();

  delete mallard;
  delete redhead;
  delete rubber;
  delete decoy;
  delete model;

  return 0;
}
