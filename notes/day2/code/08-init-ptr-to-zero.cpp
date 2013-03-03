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
    double* my_ptr = 0;

    // some other code which may or
    // may not set my_ptr goes here

    if (my_ptr)
    {
        std::cout << *my_ptr << "\n";
    }
    // NOTES: END INCLUSION
    return 0;
}

