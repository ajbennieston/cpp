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
  std::vector<int> naturals;
  naturals.push_back(1);
  naturals.push_back(2);
  naturals.push_back(3);
  naturals.push_back(4);

  // NOTES: BEGIN INCLUSION
  std::vector<int>::iterator iter;
  for (iter = naturals.begin(); iter != naturals.end(); ++iter)
  // NOTES: END INCLUSION
  {
    // loop body; here just output each element
    std::cout << *iter << "\n";
  }
  return 0;
}
