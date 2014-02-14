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
    // A vector is created and no space is allocated
    // for its elements.
    // size = 0, capacity = 0

    myvec.reserve(5);
    // An array is allocated with 5 elements.
    // size = 0, capacity = 5

    // Because the vector already has enough capacity,
    // the next five push_back() operations will not
    // trigger a reallocation...

    myvec.push_back(1);
    // size = 1, capacity = 5

    myvec.push_back(3);
    // size = 2, capacity = 5

    myvec.push_back(5);
    // size = 3, capacity = 5

    myvec.push_back(7);
    // no reallocation is required.
    // size = 4, capacity = 5
    
    myvec.push_back(9);
    // size = 5, capacity = 5

    // But if we push_back() a sixth time, we will
    // trigger a reallocation, and probably end up
    // with capacity = 10.
    // NOTES: END INCLUSION
    std::cout << myvec[0] << "\n";
    return 0;
}
