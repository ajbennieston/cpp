/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: a
 */

#include <iostream>

int main()
{
    // NOTES: BEGIN INCLUSION
    int i(0);
    std::cin >> i;
    if (std::cin.fail())
    {
        std::cerr << "Failed while attempting to read an integer from";
        std::cerr << "standard input. Did you type a letter by mistake?\n";
    }
    // Otherwise, use i
    // NOTES: END INCLUSION
    return 0;
}
