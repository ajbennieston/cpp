/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <cmath>

// NOTES: BEGIN INCLUSION
bool multiply_magnitudes(double a, double b, double& answer) {
  if (a < 0) a = fabs(a);
  if (b < 0) b = fabs(b);
  answer = fabs(a) * fabs(b);
  return true;
}
// NOTES: END INCLUSION

int main() {
  double x{0};
  if (multiply_magnitudes(3.14, -2, x) != true)
    return 1;
  else
    return 0;
}
