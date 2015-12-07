/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 * Input: 4 3 2 1
 */

#include <iostream>

class FourVector {
 public:
  void setT(const double t_) { t = t_; }
  void setX(const double x_) { x = x_; }
  void setY(const double y_) { y = y_; }
  void setZ(const double z_) { z = z_; }

 private:
  double t, x, y, z;
};

// NOTES: BEGIN INCLUSION
std::istream& operator>>(std::istream& stream, FourVector& vec) {
  double t, x, y, z;
  stream >> t >> x >> y >> z;
  vec.setT(t);
  vec.setX(x);
  vec.setY(y);
  vec.setZ(z);
  return stream;
}
// NOTES: END INCLUSION

int main() {
  FourVector v;
  std::cin >> v;
  return 0;
}
