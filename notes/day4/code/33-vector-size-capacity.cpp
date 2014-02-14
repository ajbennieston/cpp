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
    
    myvec.push_back(1);
    // An array is dynamically allocated, and the value
    // 1 is inserted into its 0th element.
    // size = 1, capacity = 1

    myvec.push_back(3);
    // The array is reallocated to make room, and the
    // value 3 is written into the 1st element.
    // size = 2, capacity = 2

    myvec.push_back(5);
    // the array is reallocated to make room, and the
    // value 5 is written into the 2nd element.
    // size = 3, capacity = 4

    myvec.push_back(7);
    // The value 7 is written into the 3rd element of
    // the array, which already has enough capacity, so
    // no reallocation is required.
    // size = 4, capacity = 4
    
    myvec.push_back(9);
    // The array is reallocated to make room, and the
    // value 9 is written into the 4th element.
    // size = 5, capacity = 8
    // NOTES: END INCLUSION
    std::cout << myvec[0] << "\n";
    return 0;
}
