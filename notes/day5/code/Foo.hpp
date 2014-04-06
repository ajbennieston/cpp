#ifndef FOO_HPP
#define FOO_HPP

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

#endif
