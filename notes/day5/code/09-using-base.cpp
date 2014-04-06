/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <string>

// NOTES: BEGIN INCLUSION
class Base {
    public:
        void func(int x);
};

class Derived : public Base {
    public:
        void func(const std::string x);
        using Base::func; // unhides Base::func(int x)
};
// NOTES: END INCLUSION

void Base::func(int x)
{
    std::cout << x << "\n";
}

void Derived::func(const std::string x)
{
    std::cerr << x << "\n";
}

int main()
{
    Derived d;
    d.func(2);
}
