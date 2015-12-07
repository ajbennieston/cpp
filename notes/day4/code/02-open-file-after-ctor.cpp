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
  bool someCondition = true;
  // NOTES: BEGIN INCLUSION
  std::ofstream log;
  std::string filename;

  if (someCondition)
    filename = "log1.out";
  else
    filename = "log2.out";

  log.open(filename);
  // NOTES: END INCLUSION
  log << "Test\n";
  return 0;
}
