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
#include <list>
#include <vector>

// NOTES: BEGIN INCLUSION
template <typename T>
T& operator+=(T& v, const typename T::value_type& element) {
  v.push_back(element);
  return v;
}

template <typename T>
T& operator, (T& v, const typename T::value_type& element) {
  v.push_back(element);
  return v;
}
// NOTES: END INCLUSION

int main() {
  std::vector<int> v;
  v += 1, 2, 3, 4, 5;
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";

  std::list<int> l;
  l += 1, 2, 3, 4, 5;
  std::copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
  return 0;
}
