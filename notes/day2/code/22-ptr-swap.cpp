/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
void ptr_swap(double* a, double* b) {
  double tmp(*a);
  *a = *b;
  *b = tmp;
}
// NOTES: END INCLUSION

int main() {
  double a(3.14);
  double b(6.63e-34);
  ptr_swap(&a, &b);
  return 0;
}
