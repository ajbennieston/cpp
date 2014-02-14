/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <vector>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::vector<int> myvec;
    myvec.push_back(1);
    myvec.push_back(3);
    myvec.push_back(5);
    myvec.push_back(7);
    myvec.push_back(9);
    // NOTES: END INCLUSION
    std::cout << myvec[0] << "\n";
    return 0;
}
