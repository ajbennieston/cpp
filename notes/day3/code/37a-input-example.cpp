/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Compile Should Succeed: N
 */

#include <iostream>

struct FourVector {
    double some_value;
};

std::istream& operator>>(std::istream& in, FourVector& vec);
std::ostream& operator<<(std::ostream& out, const FourVector& vec);

int main()
{
    // NOTES: BEGIN INCLUSION
    FourVector a;
    std::cin >> a;
    a.setX(4);
    std::cout << a << "\n";
    // NOTES: END INCLUSION
    return 0;
}
