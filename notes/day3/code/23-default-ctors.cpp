/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
class A {
    public:
        double getX() const { return x; }
        void setX(const double x_) { x = x_; }
    private:
        double x;
};

class B {
    public:
        B(const double initial_value)
            : x(initial_value) {}
        double getX() const { return x; }
        void setX(const double x_) { x = x_; }
    private:
        double x;
};

class C {
    public:
        C() : x(0.0) {}
        C(const double initial_value)
            : x(initial_value) {}
        double getX() const { return x; }
        void setX(const double x_) { x = x_; }
    private:
        double x;
};
// NOTES: END INCLUSION

int main()
{
    return 0;
}
