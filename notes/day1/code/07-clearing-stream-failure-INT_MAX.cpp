/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: a
 */

#include <iostream>
#include <climits>

int main()
{
    int i(0);
    std::cin >> i;
    // NOTES: BEGIN INCLUSION
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
    // NOTES: END INCLUSION
    return 0;
}
