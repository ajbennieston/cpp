/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
class FourVector {
 public:
  double getX() const {
    ++use_count;
    return x;
  }

 private:
  double x;
  mutable int use_count;
};
// NOTES: END INCLUSION

int main() { return 0; }
