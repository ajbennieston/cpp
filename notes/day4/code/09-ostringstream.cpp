/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Unused Parameters: Y
 */

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char** argv)
{
    int nEvents = 5;
    // NOTES: BEGIN INCLUSION
    for (int i = 0; i < nEvents; ++i)
    {
        std::ostringstream out;
        out << "Event " << i << "\n";
        std::string eventTitle = out.str();
        std::cout << eventTitle << "\n";
    }
    // NOTES: END INCLUSION
    return 0;
}
