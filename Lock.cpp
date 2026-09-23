#include "Lock.h"

Lock::Lock() : unlocked(false) {}

bool Lock::unlock() {
    if(unlocked) {
      return false;
    }
    unlocked = true;
    return true;
}

bool Lock::isUnlocked() const {
  return unlocked;
}
