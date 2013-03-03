/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

int main()
{
    // NOTES: BEGIN INCLUSION
    int x = 10;
    do {
        std::cout << x
            << " green bottles, hanging on the wall...\n";
        --x;
    } while (x > 0);
    // NOTES: END INCLUSION
    return 0;
}

