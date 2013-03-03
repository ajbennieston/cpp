/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <cmath>

// NOTES: BEGIN INCLUSION
double length(double x, double y, double z)
{
    return sqrt(x*x + y*y + z*z);
}

double length(double t, double x, double y, double z)
{
    double len3 = length(x, y, z);
    return sqrt(t*t - len3*len3);
}
// NOTES: END INCLUSION

int main()
{
    length(4, 3, 2, 1);
    return 0;
}
