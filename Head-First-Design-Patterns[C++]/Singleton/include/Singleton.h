#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <memory>
#include <mutex>
#include <string>

class Singleton {
public:
  static std::unique_ptr<Singleton> getInstance();
  std::string getDescription();

private:
  static std::mutex sLock;
  static std::unique_ptr<Singleton> sInstance;
  Singleton();
};

#endif
