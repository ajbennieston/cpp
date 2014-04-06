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
    std::vector<int> numbers;
    for (int i = 0; i < 10; ++i)
    {
        numbers.push_back(i);
    }

    std::vector<int>::const_iterator iter = numbers.begin();
    const std::vector<int>::const_iterator end = numbers.end();
    while (iter != end)
    {
        std::cout << *iter << "\n";
        ++iter;
    }
    // NOTES: END INCLUSION
    return 0;
}
