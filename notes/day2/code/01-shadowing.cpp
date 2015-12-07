/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: N
 * Run Should Succeed: N
 * Ignore Unused Parameters: Y
 * Ignore Uninitialized Variables: Y
 */

// NOTES: BEGIN INCLUSION
void divide(double a, double b, double& answer) {
  if (b != 0) {
    double a;
    answer = a / b;
  }
}
// NOTES: END INCLUSION

int main() {
  double answer{0};
  divide(1, 2, answer);
  return 0;
}
