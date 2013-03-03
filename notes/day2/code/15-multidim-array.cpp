/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

int main()
{
    // NOTES: BEGIN INCLUSION
    // make array of four pointers to int
    int** x = new int*[4];
    for(int i = 0; i < 4; ++i)
    {
        // make array of i+1 ints
        x[i] = new int[i+1];
    }
    // NOTES: END INCLUSION
    return 0;
}

