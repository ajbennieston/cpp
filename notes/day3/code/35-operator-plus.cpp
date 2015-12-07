/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 * Ignore Unused Variables: Y
 */

class Foo {
 public:
  Foo& operator+=(const Foo& rhs);

 private:
  double x;
};

Foo& Foo::operator+=(const Foo& rhs) {
  x += rhs.x;
  return *this;
}

// NOTES: BEGIN INCLUSION
Foo operator+(const Foo& lhs, const Foo& rhs) {
  Foo temp(lhs);
  temp += rhs;
  return temp;
}
// NOTES: END INCLUSION

int main() {
  Foo a;
  Foo b;
  Foo c = a + b;
  return 0;
}
