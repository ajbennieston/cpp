/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

int main() {
  // NOTES: BEGIN INCLUSION
  const int n_elements = 5;
  double* my_array = new double[n_elements];

  // code to use the array would go here

  delete[] my_array;
  // NOTES: END INCLUSION
  return 0;
}
