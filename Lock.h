#pragma once

class Lock {
  private:
    bool unlocked;
  protected:
    Lock();
    bool unlock();
  public:
    boo isUnlocked() const;
};
