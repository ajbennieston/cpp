/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: Y
 * Run: Y
 * Run Should Succeed: Y
 * Input: 4 3 2 1
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
class FourVector {
    public:
        /* ... */
        friend std::istream& operator>>(std::istream&, FourVector&);
    private:
        double t; 
        double x;
        double y; 
        double z;
};

std::istream& operator>>(std::istream& stream, FourVector& vec)
{
    stream >> vec.t >> vec.x >> vec.y >> vec.z;
    return stream;
}
// NOTES: END INCLUSION

int main()
{
    FourVector v;
    std::cin >> v;
    return 0;
}
