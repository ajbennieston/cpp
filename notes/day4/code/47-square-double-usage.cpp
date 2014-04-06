
/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

inline double square(const double x)
{
    return x * x;
}

int main()
{
    // NOTES: BEGIN INCLUSION
    double a = 4;
    std::cout << square(a) << "\n";
    // NOTES: END INCLUSION
    return 0;
}
