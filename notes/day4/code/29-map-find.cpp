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

// NOTES: BEGIN INCLUSION
typedef std::map<std::string, int> CodeMap;

int getCountryCode(const CodeMap& map, const std::string& country)
{
    CodeMap::const_iterator i = map.find(country);
    if (i != map.end())
        return i->second;
    else return 0;
}
// NOTES: END INCLUSION

int main()
{
    CodeMap countryCodes;
    countryCodes["UK"] = 44;
    countryCodes["US"] = 1;
    std::cout << getCountryCode(countryCodes, "UK");
    return 0;
}
