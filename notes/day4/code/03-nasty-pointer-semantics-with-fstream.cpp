/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <fstream>
#include <iostream>

int main()
{
    bool someCondition = true;
    // NOTES: BEGIN INCLUSION
    std::ofstream* log = nullptr;
    
    if(someCondition)
        log = new std::ofstream("log1.out");
    else
        log = new std::ofstream("log2.out");

    *log << "Test\n";

    delete log; // remember to free the memory!
    // NOTES: END INCLUSION
    return 0;
}

