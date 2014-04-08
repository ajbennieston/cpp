/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 * Ignore Unused Variables: Y
 */


class Foo {
    public:
        Foo& operator+=(const Foo& rhs);
    private:
        double x;

};

Foo& Foo::operator+=(const Foo& rhs)
{
    x += rhs.x;
    return *this;
}

// NOTES: BEGIN INCLUSION
// Note that the first argument is of type
//   Foo
// not
//   const Foo&
Foo operator+(Foo lhs, const Foo& rhs)
{
    return lhs += rhs; // So lhs is already a copy, here
}
// NOTES: END INCLUSION

int main()
{
    Foo a;
    Foo b;
    Foo c = a + b;
    return 0;
}
