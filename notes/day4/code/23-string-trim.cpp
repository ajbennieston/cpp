/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <string>

// NOTES: BEGIN INCLUSION
std::string trim(const std::string& str) {
  std::string::size_type p = str.find_first_not_of(" \t\r\n");
  std::string::size_type q = str.find_last_not_of(" \t\r\n");
  return str.substr(p, q - p + 1);
}
// NOTES: END INCLUSION

int main() {
  std::string s = "   test string\r\n";
  std::cout << trim(s) << "\n";
  return 0;
}
