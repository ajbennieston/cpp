/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include "Foo.hpp"
#include <iostream>

int main() {
  Foo::Foo* f = Foo::makeFoo(42);
  std::cout << f->x << "\n";
  delete f;
  return 0;
}
// NOTES: END INCLUSION
