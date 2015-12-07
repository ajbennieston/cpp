/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <fstream>

int main() {
  // NOTES: BEGIN INCLUSION
  std::ofstream log("log.out");
  log << "Hello, log world!\n";
  log.close();
  // NOTES: END INCLUSION
  return 0;
}
