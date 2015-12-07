/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: 9
 */

#include <iostream>

int main() {
  // NOTES: BEGIN INCLUSION
  int month{0};
  std::cin >> month;

  switch (month) {
    case 1:
      std::cout << "Jan";
      break;
    case 2:
      std::cout << "Feb";
      break;
    case 3:
      std::cout << "Mar";
      break;
    case 4:
      std::cout << "Apr";
      break;
    case 5:
      std::cout << "May";
      break;
    case 6:
      std::cout << "Jun";
      break;
    case 7:
      std::cout << "Jul";
      break;
    case 8:
      std::cout << "Aug";
      break;
    case 9:
      std::cout << "Sep";
      break;
    case 10:
      std::cout << "Oct";
      break;
    case 11:
      std::cout << "Nov";
      break;
    case 12:
      std::cout << "Dec";
      break;
    default:
      std::cout << "Invalid month";
      break;
  }
  // NOTES: END INCLUSION
  return 0;
}
