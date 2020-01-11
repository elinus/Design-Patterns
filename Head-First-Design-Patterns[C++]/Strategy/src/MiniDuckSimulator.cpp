#include <DecoyDuck.h>
#include <FlyRocketPowered.h>
#include <MallardDuck.h>
#include <ModelDuck.h>
#include <RedheadDuck.h>
#include <RubberDuck.h>
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<Duck> duck(new MallardDuck());
  // auto *mallard = new MallardDuck();
  // duck = mallard;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::unique_ptr<Duck>(new RedheadDuck());
  // auto *redhead = new RedheadDuck();
  // duck = redhead;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::unique_ptr<Duck>(new RubberDuck());
  // auto *rubber = new RubberDuck();
  // duck = rubber;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::unique_ptr<Duck>(new DecoyDuck());
  // auto *decoy = new DecoyDuck();
  // duck = decoy;
  duck->performFly();
  duck->performQuack();
  duck->display();
  duck->swim();

  std::cout << "\n";

  duck = std::unique_ptr<Duck>(new ModelDuck());
  // auto *model = new ModelDuck();
  // duck = model;
  duck->performFly();
  duck->setFlyBehaviour(std::unique_ptr<FlyBehaviour>(new FlyRocketPowered()));
  duck->performFly();

  // delete mallard;
  // delete redhead;
  // delete rubber;
  // delete decoy;
  // delete model;

  return 0;
}
