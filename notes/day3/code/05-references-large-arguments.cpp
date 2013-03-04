/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <algorithm>
#include <vector>

void sortAndReverse(std::vector<int>& v)
{
    std::sort(v.begin(), v.end());
    std::reverse(v.begin(), v.end());
}

int main()
{
    std::vector<int> bigVector(100000);
    
    // Code to fill the massive vector
    // with meaningful data goes here

    sortAndReverse(bigVector);

    // ...
    return 0;
}
// NOTES: END INCLUSION

