/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: 3 2 + 3 2 q
 */

// NOTES: BEGIN INCLUSION
#include <iostream>
#include <cstdlib>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) { return a / b; }

int main()
{
    // variables to hold input from user
    char op('\0');
    double a(0.0), b(0.0);

    // function pointer to choose current operation
    // initialised to a null pointer
    double (*current_op)(double, double) = 0;

    while (true)
    {
        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;
        std::cout << "Enter operation: [+-*/q] ";
        std::cin >> op;

        switch(op)
        {
            case '+':
                current_op = &add;
                break;
            case '-':
                current_op = &sub;
                break;
            case '*':
                current_op = &mul;
                break;
            case '/':
                current_op = &div;
                break;
            case 'q':
                // quit program
                exit(0);
                break;
            default:
                // No sensible choice, reset
                // to null pointer
                current_op = 0;
                break;
        }

        // call the chosen function with the
        // values we read
        if (current_op)
        {
            std::cout << "Answer: "
                      << current_op(a, b) << "\n";
        }
    }

    return 0;
}

// NOTES: END INCLUSION
