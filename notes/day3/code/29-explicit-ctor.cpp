/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: N
 */

// NOTES: BEGIN INCLUSION
#include <iostream>

class Foo {
 public:
  explicit Foo(const double& x) : var(x * x + 2 * x + 1) {}
  double getVar() const { return var; }

 private:
  double var;
};

void printValue(const Foo& bar) { std::cout << bar.getVar() << std::endl; }

int main() {
  Foo my_foo(4.2);
  double my_double(1.0);

  printValue(my_foo);
  printValue(my_double);  // Error: no implicit conversion

  return 0;
}
// NOTES: END INCLUSION
