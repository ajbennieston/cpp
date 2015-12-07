/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Unused Private Variables: Y
 */

// NOTES: BEGIN INCLUSION
class Point {
 public:
  Point(const double x_, const double y_) {
    x = x_;
    y = y_;
    // Inefficient! x and y have been
    // initialised, then assigned
  }

 private:
  double x;
  double y;
};

class BetterPoint {
 public:
  BetterPoint(const double x_, const double y_) : x(x_), y(y_) {}

 private:
  double x;
  double y;
};
// NOTES: END INCLUSION

int main() { return 0; }
