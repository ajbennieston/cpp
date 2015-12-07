/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Unused Parameters: Y
 * Arguments: 10
 */

// NOTES: BEGIN INCLUSION
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {
  std::string argument(argv[1]);
  std::istringstream in(argument);
  int nEvents = 0;
  in >> nEvents;
  for (int i = 0; i < nEvents; ++i) std::cout << "Event " << i << "\n";
  return 0;
}
// NOTES: END INCLUSION
