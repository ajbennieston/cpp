/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <iterator>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::copy(std::istream_iterator<int>(std::cin),
              std::istream_iterator<int>(),
              std::ostream_iterator<int>(std::cout, "\n"));
    // NOTES: END INCLUSION
    return 0;
}
