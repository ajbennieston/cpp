/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: a
 */

// NOTES: BEGIN INCLUSION
#include <iostream>
#include <limits>

int main()
{
    std::cout << std::numeric_limits<float>::epsilon() << std::endl;
    std::cout << std::numeric_limits<double>::epsilon() << std::endl;
    return 0;
}
// NOTES: END INCLUSION
