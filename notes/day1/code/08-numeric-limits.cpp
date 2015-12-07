/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <iostream>
#include <limits>

int main() {
  int biggest = std::numeric_limits<int>::max();
  std::cout << "The biggest value which can be held in an int is ";
  std::cout << biggest << std::endl;
  return 0;
}
// NOTES: END INCLUSION
