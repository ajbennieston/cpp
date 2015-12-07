/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <fstream>
#include <iostream>

int main() {
  // NOTES: BEGIN INCLUSION
  std::ofstream log("log.out");
  if (!log) {
    // Something went wrong. Deal with it, somehow.
  }
  // NOTES: END INCLUSION
  return 0;
}
