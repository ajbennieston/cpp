/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

void swap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int a = 4;
  int b = 3;
  // NOTES: BEGIN INCLUSION
  ::swap(a, b);
  // NOTES: END INCLUSION
  std::cout << a << ", " << b << "\n";
  return 0;
}
