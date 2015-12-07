/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: N
 */

int main() {
  // NOTES: BEGIN INCLUSION
  int a = 4;
  a = 6;  // allowed, non-const object

  const int& b = a;  // b is a reference to const a
  b = 2;             // compiler error - cannot assign to const object
  // NOTES: END INCLUSION
  return 0;
}
