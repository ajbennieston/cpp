/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

template<typename T> inline T square(const T& x)
{
    return x * x;
}

int main()
{
    // NOTES: BEGIN INCLUSION
    int a = 4;
    int b = square(a); // instantiates square<int>

    double c = 2.0;
    double d = square(c); // instantiates square<double>

    int x = 4;
    double y = square<double>(x);
    /* Uses square<double>, even though the function
     * argument is of type int, because the template
     * parameter was provided explicitly rather than
     * being deduced from the function arguments.
     */
    // NOTES: END INCLUSION

    // Suppress unused variable warnings!
    std::cout << a << b << c << d << x << y << "\n";

    return 0;
}
