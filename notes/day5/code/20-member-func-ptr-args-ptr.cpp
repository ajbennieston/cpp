/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <iostream>

class A {
 public:
  double square(double x) { return x * x; }
};

int main() {
  double (A::*func_ptr)(double) = &A::square;

  A* my_a_ptr = new A;
  double result = (my_a_ptr->*func_ptr)(3.14);

  std::cout << result << "\n";

  delete my_a_ptr;
  return 0;
}
// NOTES: END INCLUSION
