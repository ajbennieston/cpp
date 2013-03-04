/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
void addFour(int& bill)
{
    bill += 4;
}

int main()
{
    int bob = 2;
    int fred = 3;
    addFour(bob); // bob now has the value 6
    addFour(fred); // fred now has the value 7
    return 0;
}
// NOTES: END INCLUSION

