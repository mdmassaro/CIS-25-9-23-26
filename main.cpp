#include <iostream>
#include "CodeLock.h"
#include "KeyLock.h"
using namespace std;

bool passageIsOpen(const Lock& lock) {
  return lock.isUnlocked();
}

int main() {
  CodeLock cabinetLock("1234");
  KeyLock passageLock("brass-key");
  cout << boolalpha;
  cout << cabinetLock.tryCode("42") << endl;
  cout << cabinetLock.tryCode("1234") << endl;
  cout << cabinetLock.tryCode("1234") << endl;
  cout << passageIsOpen(cabinetLock) << endl;
  cout << passageIsOpen(passageLock) << endl;
  cout << passageLock.tryKey("silver-key") << endl;
  cout << passageLock.tryKey("brass-key") << endl;
  cout << passageLock.tryKey("brass-key") << endl;
  cout << passageIsOpen(passageLock) << endl;
  

  return 0;
}
