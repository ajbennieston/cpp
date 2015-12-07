/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: 5
 */

#include <iostream>

int main() {
  // NOTES: BEGIN INCLUSION
  int i{0};
  std::cout << "Enter starting point: ";
  std::cin >> i;
  for (/* use existing value of i */; i < 10; ++i) {
    std::cout << i << "\n";
  }
  // NOTES: END INCLUSION
  return 0;
}
