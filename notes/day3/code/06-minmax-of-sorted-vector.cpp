/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

// NOTES: BEGIN INCLUSION
std::pair<int, int> minmax_sorted_vector(const std::vector<int>& v)
{
    return std::make_pair(v.front(), v.back());
}
// NOTES: END INCLUSION

int main()
{
    std::vector<int> bigVector;
    bigVector.push_back(1);
    bigVector.push_back(2);
    bigVector.push_back(6);
    bigVector.push_back(3);
    bigVector.push_back(4);
    bigVector.push_back(2);
    bigVector.push_back(-2);
    
    std::sort(bigVector.begin(), bigVector.end());
    std::pair<int, int> minmax = minmax_sorted_vector(bigVector);
    std::cout << minmax.first << "\n";

    return 0;
}

