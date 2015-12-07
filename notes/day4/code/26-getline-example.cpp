/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <fstream>
#include <iostream>
#include <string>

int main() {
  // NOTES: BEGIN INCLUSION
  std::string myline;
  std::ifstream file("myFile.dat");
  std::getline(file, myline);
  // NOTES: END INCLUSION
  return 0;
}
