/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

class Power {
    public:
        explicit Power(int pow)
            : N(pow) {}

        int operator()(int i)
        {
            int result(i);
            for (int j = 1; j < N; ++j)
            {
                result *= i;
            }
            return result;
        }
    private:
        const int N;
};

int main()
{
    // Input vector contains 1, 2, 3
    std::vector<int> input(3);
    input[0] = 1;
    input[1] = 2;
    input[2] = 3;

    // Create a functor which gives us
    // the 4th power of a number...
    Power quad(4);
    // Use it directly on the value 2...
    std::cout << quad(2) << "\n";

    // Use the same functor as the unary operator
    // in a call to std::transform()...
    std::transform(input.begin(), input.end(),
                   std::ostream_iterator<int>(std::cout, " "),
                   quad);
    std::cout << "\n";

    // This time, create a temporary Power object
    // to pass as an argument to std::transform()
    // to compute the 8th power...
    std::transform(input.begin(), input.end(),
            std::ostream_iterator<int>(std::cout, " "),
            Power(8));
    std::cout << "\n";

    return 0;
}
// NOTES: END INCLUSION
