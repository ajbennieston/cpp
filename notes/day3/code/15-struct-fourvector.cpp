/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
struct FourVector {
    double t;
    double x;
    double y;
    double z;
};

double interval(const FourVector& vec);
FourVector boost_z(const FourVector& vec, const double velocity);
// NOTES: END INCLUSION

int main()
{
    return 0;
}
