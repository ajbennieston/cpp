/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: Y
 */

#include <iostream>
#include <iterator>
#include <string>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::string bob((std::istream_iterator<char>(std::cin)),
            std::istream_iterator<char>());
    // NOTES: END INCLUSION
    return 0;
}
