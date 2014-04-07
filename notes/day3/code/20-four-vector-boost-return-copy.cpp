/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Shadowed Variables: Y
 */

#include <cmath>

class FourVector {
    public:
        FourVector(const double t, const double x,
                   const double y, const double z)
            : t(t), x(x), y(y), z(z) {}
        FourVector boost_z(const double velocity);
    private:
        double t;
        double x;
        double y;
        double z;
};

// NOTES: BEGIN INCLUSION
// - OR -

// Return a modified copy of the four-vector
FourVector FourVector::boost_z(const double velocity)
{
    // natural units: c = 1
    double gamma = 1.0 / sqrt(1.0 - velocity*velocity);
    double t2 = gamma * (t - velocity * z);
    double z2 = gamma * (z - velocity * t);
    return FourVector(t2, x, y, z2); // return a FourVector
}
// NOTES: END INCLUSION

int main()
{
    return 0;
}
