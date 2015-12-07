/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: N
 */

// FIXME: Make this example compile by adding a minimal
// FourVector class supporting the required operations

// NOTES: BEGIN INCLUSION
FourVector operator*(const FourVector& lhs, const double& rhs) {
  FourVector tmp(lhs);
  tmp *= rhs;
  return tmp;
}

FourVector operator*(const double& lhs, const FourVector& rhs) {
  FourVector tmp(rhs);
  tmp *= lhs;
  return tmp;
}
// NOTES: END INCLUSION

int main() { return 0; }
