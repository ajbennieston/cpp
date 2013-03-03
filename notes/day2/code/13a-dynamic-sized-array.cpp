/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: 10
 */

#include <iostream>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::cout << "How many numbers do you have?" << "\n";
    int size(0);
    std::cin >> size;
    int* x = new int[size];
    // NOTES: END INCLUSION
    delete x;
    return 0;
}

