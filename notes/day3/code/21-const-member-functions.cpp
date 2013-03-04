/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: N
 * Run Should Succeed: N
 */

// NOTES: BEGIN INCLUSION
class Point {
    public:
        Point() : x(0.0), y(0.0) {}
        double getX() const { return x; }
        double getY() const { return y; }
        double doSomething() const
        {
            x = 4; // Compile error; trying to change
                   // a member variable inside a const
                   // member function
        }
        void setX(double x_) { x = x_; }
        void setY(double y_) { y = y_; }
    private:
        double x;
        double y;
};

int main()
{
    const Point pt;
    std::cout << pt.getX() << "\n"; // Allowed
    // since getX() is a const member function

    pt.setY(4.2); // Compile error; cannot call
    // a non-const member function of a const object
    
    return 0;
}
// NOTES: END INCLUSION
