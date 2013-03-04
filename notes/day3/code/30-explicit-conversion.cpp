/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <iostream>

class Foo {
    public:
        explicit Foo(const double& x)
            : var(x*x + 2*x + 1) {}
        double getVar() const { return var; }
    private:
        double var;
};

void printValue(const Foo& bar)
{
    std::cout << bar.getVar() << std::endl;
}

int main()
{
    Foo my_foo(4.2);
    double my_double(1.0);

    printValue(my_foo);
    printValue(Foo(my_double)); 

    return 0;
}
// NOTES: END INCLUSION
