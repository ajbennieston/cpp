/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: N
 * Run Should Succeed: N
 */

#include <iostream>

template <typename T>
inline T square(const T& x) {
  return x * x;
}

int main() {
  // NOTES: BEGIN INCLUSION
  std::string s = "Hello";
  std::string t = square(s);  // ERROR
                              /* Attempts to instantiate square<std::string>
   * which results in a compiler error because
   * std::string does not provide operator*
   */
  // NOTES: END INCLUSION
  return 0;
}
