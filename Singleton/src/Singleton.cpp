#include <Singleton.h>

std::mutex Singleton::sLock;
std::unique_ptr<Singleton> Singleton::sInstance = nullptr;

Singleton::Singleton() {}

std::unique_ptr<Singleton> Singleton::getInstance() {
  if (sInstance == nullptr) {
    sLock.lock();
    if (sInstance == nullptr) {
      sInstance = std::unique_ptr<Singleton>(new Singleton());
    }
    sLock.unlock();
  }
  return std::move(sInstance);
}

std::string Singleton::getDescription() {
  return std::string("I'm a thread safe Singleton!");
}
