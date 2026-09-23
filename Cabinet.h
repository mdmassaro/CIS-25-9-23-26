#pragma once
#include "CodeLock.h"
#include <string>

class Cabinet {
  private:
    CodeLock lock;
  public:
    Cabinet(std::string secretCode) : lock(secretCode){}
    bool attemptAccess(std::string guess) {
      return lock.tryCode(guess);
    }
    bool isOpen() const {
      return lock.isUnlocked();
    }
};
