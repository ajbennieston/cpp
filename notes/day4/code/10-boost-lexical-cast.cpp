/* 
 * C++ Notes Accompanying Code
 * Compile: N
 * Run: N
 */

// NOTES: BEGIN INCLUSION
#include <boost/lexical_cast.hpp>

int main(int argc, char** argv)
{
    int nEvents = boost::lexical_cast<int>(argv[1]);
    for (int i = 0; i < nEvents; ++i)
        // ...
    return 0;
}
// NOTES: END INCLUSION
