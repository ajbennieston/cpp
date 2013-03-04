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
        Foo() : x(4) {}
        int squareMe() { return x*x; }
        int getSquaredValue() { return this->x * this->x; }
    private:
        int x;
};
// NOTES: END INCLUSION

int main()
{
    return 0;
}
