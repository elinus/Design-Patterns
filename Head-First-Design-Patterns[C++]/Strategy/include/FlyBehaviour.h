#ifndef __FLY_BEHAVIOUR__
#define __FLY_BEHAVIOUR__

class FlyBehaviour {
public:
  virtual ~FlyBehaviour() = default;
  virtual void fly() = 0;
};

#endif
