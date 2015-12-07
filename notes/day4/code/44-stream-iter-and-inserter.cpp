/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <iterator>
#include <vector>

int main() {
  // NOTES: BEGIN INCLUSION
  std::vector<int> v;
  std::copy(std::istream_iterator<int>(std::cin), std::istream_iterator<int>(),
            std::back_inserter(v));
  // NOTES: END INCLUSION
  return 0;
}
