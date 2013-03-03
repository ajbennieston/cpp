/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: A
 */

#include <iostream>

void do_addition() {}
void do_subtraction() {}
void do_multiplication() {}
void do_division() {}

int main()
{
    // NOTES: BEGIN INCLUSION
    char option('\0');
    std::cin >> option;

    switch (option)
    {
        case 'A':
        case 'a':
        case '+':
            do_addition();
            break;
        case 'S':
        case 's':
        case '-':
            do_subtraction();
            break;
        case 'M':
        case 'm':
        case '*':
            do_multiplication();
            break;
        case 'D':
        case 'd':
        case '/':
            do_division();
            break;
        case 'Q':
        case 'q':
        default:
            std::cout << "Bye!\n";
            exit(0);
    }
    // NOTES: END INCLUSION
    return 0;
}
