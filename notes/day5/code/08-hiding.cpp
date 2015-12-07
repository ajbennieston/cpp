/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: N
 * Run Should Succeed: N
 */

#include <iostream>
#include <string>

// NOTES: BEGIN INCLUSION
class Base {
 public:
  // Doesn't matter if this is virtual or not:
  void func(int x);
};

class Derived : public Base {
 public:
  void func(const std::string x);
};
// NOTES: END INCLUSION

void Base::func(int x) { std::cout << x << "\n"; }

void Derived::func(const std::string x) { std::cerr << x << "\n"; }

int main() {
  Derived d;
  d.func(2);
}
