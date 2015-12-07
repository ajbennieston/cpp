/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
void reverse(double* array1, double* array2, const int size) {
  for (int i = 0, j = size - 1; i < size; ++i, --j) {
    array2[j] = array1[i];
  }
}
// NOTES: END INCLUSION

int main() {
  double a1[4] = {1, 2, 3, 4};
  double a2[4] = {0};
  reverse(a1, a2, 4);
  std::cout << a2[1] << "\n";
  return 0;
}
