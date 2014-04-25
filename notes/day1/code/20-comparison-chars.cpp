/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: q
 */

#include <cstdlib>
#include <iostream>

int main()
{
    // NOTES: BEGIN INCLUSION
    char ch{0};
    std::cin >> ch;
    if (ch == 'q')
        exit(0);
    // NOTES: END INCLUSION
    return 0;
}
