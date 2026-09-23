#pragma once
#include "Lock.h"
#include <string>

class CodeLock : public Lock {
  private:
    std::string code;
  public:
    CodeLock(std::string secretCode);
    bool tryCode(std::string guess);
};
