/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <map>
#include <string>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::map<std::string, int> countryCodes;
    countryCodes["UK"] = 44;
    countryCodes["US"] = 1;
    std::cout << countryCodes["UK"];
    // NOTES: END INCLUSION
    return 0;
}
