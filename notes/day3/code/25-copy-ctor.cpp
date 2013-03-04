/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
class Foo {
    public:
        Foo() : x(100) {} // Default constructor
        Foo(const Foo& rhs) // Copy constructor
            : x(rhs.x) {}
    private:
        double x;
};
// NOTES: END INCLUSION

int main()
{
    Foo f1;
    Foo f2(f1);
    return 0;
}
