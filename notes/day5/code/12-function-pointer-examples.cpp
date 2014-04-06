/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
void swapWithTmp(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swapWithXor(int& a, int& b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    void (*my_swap_choice)(int&, int&) = &swapWithTmp;
    // ... later...
    my_swap_choice = &swapWithXor;

    int a = 3;
    int b = 4;
    my_swap_choice(a, b);
    return 0;
}
// NOTES: END INCLUSION
