/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
template <typename T>
inline T square(const T& x) {
  return x * x;
}
// NOTES: END INCLUSION

int main() {
  double a = 4;
  std::cout << square(a) << "\n";
  return 0;
}
