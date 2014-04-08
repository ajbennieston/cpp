/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // NOTES: BEGIN INCLUSION
    std::string filename = "myFile.dat";
    std::ifstream inputFile(filename);
    // NOTES: END INCLUSION
    int tmp;
    inputFile >> tmp;
    std::cout << tmp << "\n";
    return 0;
}

