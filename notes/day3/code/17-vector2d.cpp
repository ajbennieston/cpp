/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Shadowed Variables: Y
 */

#include <cmath>
#include <iostream>

// NOTES: BEGIN INCLUSION
class Vector2D {
    public:
        Vector2D(double x, double y) : x(x), y(y) {}
        double getX() const { return x; }
        double getY() const { return y; }
        double getR() const;
        double getTheta() const;
    private:
        double x;
        double y;
};

double Vector2D::getR() const
{
    return sqrt(x*x + y*y);
}

double Vector2D::getTheta() const
{
    return atan2(y, x);
}
// NOTES: END INCLUSION

int main()
{
    Vector2D v(1, 2);
    double r = v.getR();
    std::cout << r << "\n";
    return 0;
}
