/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
// Foo.hpp
namespace Foo {

    class Foo {
        public:
            Foo(int an_x) : x(an_x) {}
            int x;
    };

    Foo* makeFoo(const int& some_x)
    {
        return new Foo(some_x);
    }

} // end namespace Foo
// NOTES: END INCLUSION

int main()
{
    Foo::Foo* f = Foo::makeFoo(3);
    std::cout << f->x << "\n";
    delete f;
    return 0;
}

