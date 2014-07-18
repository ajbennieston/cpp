/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <cmath>
#include <iostream>

// NOTES: BEGIN INCLUSION
double max(const double* array, const int size)
{
    // Exit early if the array is zero-sized
    if (size <= 0)
        return 0.0;

    // Initialise to an element of the array
    // otherwise, all elements could be < 0
    // and we would return the incorrect value
    double maximum = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    
    return maximum;
}
// NOTES: END INCLUSION

int main()
{
    double array[] = {1.1, 1.2, 1.3, 1.4, 1.5, 0.9, 6.8, 3.2};
    double max_val = max(array, 8);
    std::cout << max_val << "\n";
    return 0;
}
