/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Input: 1
 */

// NOTES: BEGIN INCLUSION
#include <iostream>
#include <cmath>

double square(double x)
{
    return x*x;
}

class Vector
{
    public:
        Vector(double p1x, double p1y,
               double p2x, double p2y)
            : x1(p1x), y1(p1y), x2(p2x), y2(p2y)
            {}

        double euclideanLength() const
        {
            // normal vector length
            return std::sqrt(square(x2-x1) + square(y2-y1));
        }

        double manhattanLength() const
        {
            // length if you can only move in
            // straight lines on a square grid
            return (x2-x1) + (y2 - y1);
        }
    private:
        double x1;
        double y1;

        double x2;
        double y2;
};

int main()
{
    /* typedefs work with function pointers.
     * The typedef name goes after the *,
     * just like the function pointer name...
     */
    typedef double (Vector::*VecFnPtr)() const;

    // Ask user which length measure they want...
    int metric_choice(0);
    std::cout << "Enter metric choice (0, 1): ";
    std::cin >> metric_choice;

    // Initialise a function pointer to null...
    VecFnPtr length_fn = 0;
    if (metric_choice == 1)
    {
        length_fn = &Vector::manhattanLength;
    }
    else
    {
        length_fn = &Vector::euclideanLength;
    }

    // Create a vector...
    Vector vec(0, 0, 1, 1);

    // Call the requested length function and
    // print the result...
    double len = (vec.*length_fn)();
    std::cout << "Length: " << len << "\n";

    // Now allocate a vector dynamically...
    Vector* vec2 = new Vector(0, 0, 2, 2);
    // Force use of Manhattan length
    length_fn = &Vector::manhattanLength;
    len = (vec2->*length_fn)();
    std::cout << "Manhattan length (expect 4): "
              << len << "\n";

    delete vec2;
    return 0;
}
// NOTES: END INCLUSION
