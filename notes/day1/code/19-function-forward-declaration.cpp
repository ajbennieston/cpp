/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <iostream>

void print_help();  // declaration

int main() {
  print_help();
  return 0;
}

void print_help()  // definition
{
  std::cout << "HELP!\n";
}
// NOTES: END INCLUSION
