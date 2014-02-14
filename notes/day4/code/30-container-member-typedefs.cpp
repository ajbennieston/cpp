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
    std::vector<int> myVec;

    // Not a loop over the vector, we're just
    // pushing elements onto it
    for(int i = 0; i < 200; ++i)
    {
        myVec.push_back(i);
    }

    // This is a loop over the vector,
    // so we use its size_type
    std::vector<int>::size_type j = 0;
    std::vector<int>::size_type size = myVec.size();
    for (/* already initialised */; j < size; ++j)
    {
        std::cout << myVec.at(j) << std::endl;
    }
    // NOTES: END INCLUSION
    return 0;
}
