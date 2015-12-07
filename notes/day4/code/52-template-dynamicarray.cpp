/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
template <typename T>
class DynamicArray {
 public:
  explicit DynamicArray(const unsigned int size)
      : size_(size), array_(new T[size]) {}

  ~DynamicArray() { delete[] array_; }

  unsigned int size() const { return size_; }

  T* array() { return array_; }

 private:
  const unsigned int size_;
  T* array_;
};
// NOTES: END INCLUSION

int main() {
  DynamicArray<int> array(42);
  array.array()[0] = 1;
  std::cout << array.array()[0] << "\n";
  return 0;
}
