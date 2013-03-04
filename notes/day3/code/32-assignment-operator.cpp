/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 */


// NOTES: BEGIN INCLUSION
class Foo {
    public:
        Foo& operator=(const Foo& rhs);
    private:
        double x;

};

Foo& Foo::operator=(const Foo& rhs)
{
    // Remember to guard against self-assignment
    if (this != &rhs)
        x = rhs.x;
    return *this;
}

int main()
{
    Foo a;
    Foo b;
    b = a; // use the assignment operator defined above
    return 0;
}
// NOTES: END INCLUSION
