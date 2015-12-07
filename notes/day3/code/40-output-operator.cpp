/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 */

#include <iostream>

class FourVector {
 public:
  FourVector() : t(0), x(0), y(0), z(0) {}
  /* ... */
  double getT() const { return t; }
  double getX() const { return x; }
  double getY() const { return y; }
  double getZ() const { return z; }

 private:
  double t;
  double x;
  double y;
  double z;
};

// NOTES: BEGIN INCLUSION
std::ostream& operator<<(std::ostream& stream, const FourVector& vec) {
  stream << "(" << vec.getT() << ", " << vec.getX();
  stream << ", " << vec.getY() << ", " << vec.getZ() << ")";
  return stream;
}
// NOTES: END INCLUSION

int main() {
  FourVector v;
  std::cout << v << "\n";
  return 0;
}
