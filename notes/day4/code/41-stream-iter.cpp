/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    std::copy(v.begin(), v.end(),
              std::ostream_iterator<int>(std::cout, "\n"));
    // NOTES: END INCLUSION
    return 0;
}
