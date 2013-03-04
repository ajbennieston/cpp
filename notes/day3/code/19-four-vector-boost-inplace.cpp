/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Unused Private Variables: Y
 */

#include <cmath>

class FourVector {
    public:
        void boost_z(const double velocity);
    private:
        double t;
        double x;
        double y;
        double z;
};

// NOTES: BEGIN INCLUSION
// Change the four-vector in place
void FourVector::boost_z(const double velocity)
{
    // natural units: c = 1
    double original_t = t;
    double gamma = 1.0 / sqrt(1.0 - velocity*velocity);
    t = gamma * (t - velocity * z);
    z = gamma * (z - velocity * original_t);
}
// NOTES: END INCLUSION

int main()
{
    return 0;
}
