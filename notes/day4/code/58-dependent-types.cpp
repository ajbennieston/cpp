/* 
 * C++ Notes Accompanying Code
 * Compile: N
 * Run: N
 * Compile Should Succeed: N
 * Run Should Succeed: N
 */

// NOTES: BEGIN INCLUSION
template<typename T>
T& operator+=(T& v, const typename T::value_type& element)
{
    v.push_back(element);
    return v;
}
// NOTES: END INCLUSION

