#include <iostream>
#include "Lock.h"
#include "CodeLock.h"
#include "KeyLock.h"
using namespace std;

int main() {
  CodeLock newLock(1234);
  KeyLock anotherLock(5678);

  return 0;
}
