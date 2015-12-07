/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

int main() {
  // NOTES: BEGIN INCLUSION
  int* y = new int[3];
  y[0] = y[1] = y[2] = 0;
  delete[] y;
  // NOTES: END INCLUSION
  return 0;
}
