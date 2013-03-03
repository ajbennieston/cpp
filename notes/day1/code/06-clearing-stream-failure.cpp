/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: a
 */

#include <iostream>
#include <limits>

int main()
{
    int i(0);
    std::cin >> i;
    // NOTES: BEGIN INCLUSION
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    // NOTES: END INCLUSION
    return 0;
}
