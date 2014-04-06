/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <iostream>

class A {
    public:
        double square(double x) { return x*x; }
};

int main()
{
    double (A::*func_ptr)(double) = &A::square;

    A my_a;
    double result = (my_a.*func_ptr)(3.14);

    std::cout << result << "\n";
    return 0;
}
// NOTES: END INCLUSION
