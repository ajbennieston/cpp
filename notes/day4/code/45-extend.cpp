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

// NOTES: BEGIN INCLUSION
template<typename T>
void extend(std::vector<T>& v1, const std::vector<T>& v2)
{
    v1.reserve(v1.size() + v2.size());
    std::copy(v2.begin(), v2.end(), std::back_inserter(v1));
}
// NOTES: END INCLUSION

int main()
{
    std::vector<int> v1;
    std::vector<int> v2;
    
    for (int x = 0; x < 10; ++x)
    {
        v1.push_back(x);
        v2.push_back(10 + x);
    }

    extend(v1, v2);

    std::copy(v1.begin(), v1.end(),
              std::ostream_iterator<int>(std::cout, ", "));
    std::cout << "\n";

    return 0;
}
