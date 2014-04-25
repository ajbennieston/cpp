/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

/*
 * The example in the text is simply to describe the parts that
 * appear inside for ( ... ), so the defines below serve to allow
 * this example to actually compile!
 */
#define initialiser x = 0
#define condition x < 10
#define loop_process ++x

int main()
{
    int x{0};
    // NOTES: BEGIN INCLUSION
    for ( initialiser ; condition ; loop_process )
    // NOTES: END INCLUSION
    {
        std::cout << x << "\n";
    }
    return 0;
}
