/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
class DynamicArray {
    public:
        explicit DynamicArray(const unsigned int size)
            : size_(size), array_(new int[size])
            {}

        ~DynamicArray() { delete[] array_; }

        unsigned int size() const { return size_; }

        int* array() { return array_; }

    private:
        const unsigned int size_;
        int* array_;
};
// NOTES: END INCLUSION

int main()
{
    DynamicArray array(42);
    array.array()[0] = 1;
    std::cout << array.array()[0] << "\n";
    return 0;
}
