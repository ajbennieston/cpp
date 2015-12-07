/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <vector>

int main() {
  // NOTES: BEGIN INCLUSION
  std::vector<int> naturals;
  naturals.push_back(1);
  naturals.push_back(2);
  naturals.push_back(3);
  naturals.push_back(4);

  std::vector<int>::iterator iter = naturals.begin();
  ++iter;
  std::cout << *iter << std::endl;
  // Output: 2
  // NOTES: END INCLUSION
  return 0;
}
