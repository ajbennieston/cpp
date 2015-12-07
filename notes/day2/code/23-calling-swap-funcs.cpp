/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

void swap(double& a, double& b) {
  double tmp(a);
  a = b;
  b = tmp;
}

void ptr_swap(double* a, double* b) {
  double tmp(*a);
  *a = *b;
  *b = tmp;
}

int main() {
  // NOTES: BEGIN INCLUSION
  double first = 10;
  double second = 42;

  swap(first, second);  // pass by reference
  std::cout << first << ", " << second << "\n";

  ptr_swap(&first, &second);  // pass pointers
  std::cout << first << ", " << second << "\n";
  // NOTES: END INCLUSION
  return 0;
}
