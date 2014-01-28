/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Arguments: myFile.dat
 */

// NOTES: BEGIN INCLUSION
// good_read.cpp
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    // Check for correct arguments
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " filename\n";
        return 1;
    }
    
    // Open the file and test for failure
    std::ifstream in(argv[1]);
    if (! in)
    {
        std::cerr << "Could not open file: " << argv[1] << "\n"; 
        return 1;
    }

    // Read lines into a string and print them, one by one
    std::string line;
    while (true)
    {
        std::getline(in, line);
        if (! in)
            break;
        std::cout << "+ " << line << "\n";
    }

    // Close the file when finished
    in.close();

    return 0;
}
// NOTES: END INCLUSION
