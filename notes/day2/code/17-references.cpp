/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

int main() {
  // NOTES: BEGIN INCLUSION
  int a = 4;

  int* b = &a;  // b points to a
  *b = 2;       // a now has value 2

  int& c = a;  // c is a reference to a
  c = 3;       // a now has value 3

  int d = 6;
  b = &d;  // b now points to d

  c = d;  // a now has the value 6
  // NOTES: END INCLUSION
  return 0;
}
