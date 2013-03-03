/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <cmath>

// NOTES: BEGIN INCLUSION
bool multiply_magnitudes(const double&a, const double& b, double& answer)
{
    answer = fabs(a) * fabs(b);
    return true;

}
// NOTES: END INCLUSION

int main()
{
    double x(0);
    if (multiply_magnitudes(3.14, -2, x) != true)
        return 1;
    else
        return 0;
}
