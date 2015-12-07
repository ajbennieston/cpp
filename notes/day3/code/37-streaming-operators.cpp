/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 */

#include <iostream>

struct FourVector {
  double some_value;
};

// NOTES: BEGIN INCLUSION
std::istream& operator>>(std::istream& in, FourVector& vec);
std::ostream& operator<<(std::ostream& out, const FourVector& vec);
// NOTES: END INCLUSION

int main() { return 0; }
