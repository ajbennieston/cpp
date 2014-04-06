/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <iostream>
#include <iterator>

int main()
{
    std::istream_iterator<int> input(std::cin);
    std::istream_iterator<int> end;

    while (input != end)
    {
        int value = *input++;
        std::cout << value * value << "\n";
    }
    return 0;
}
// NOTES: END INCLUSION
