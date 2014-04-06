/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

// NOTES: BEGIN INCLUSION
template<typename T>
std::vector<T>& operator+=(std::vector<T>& v, const T& element)
{
    v.push_back(element);
    return v;
}

template<typename T>
std::vector<T>& operator,(std::vector<T>& v, const T& element)
{
    v.push_back(element);
    return v;
}
// NOTES: END INCLUSION

int main()
{
    std::vector<int> v;
    v += 1, 2, 3, 4, 5;
    std::copy(v.begin(), v.end(),
              std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";
    return 0;
}
