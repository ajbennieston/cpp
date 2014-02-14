/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <map>

int main()
{
    // NOTES: BEGIN INCLUSION
    typedef std::map<int, std::string> MyMapType;
    MyMapType someMap;
    someMap[1] = "one";
    someMap[2] = "two";

    // later ...
    
    MyMapType::key_type first_key = someMap.begin()->first;
    MyMapType::mapped_type first_value = someMap.begin()->second;
    // NOTES: END INCLUSION
    std::cout << first_key << ", " << first_value << "\n";
    return 0;
}
