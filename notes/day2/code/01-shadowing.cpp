/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: N
 * Compile Should Succeed: N
 * Run Should Succeed: N
 */

// FIXME: This produces a compiler error; need a different
// shadowing example, and to change the text accordingly.

// NOTES: BEGIN INCLUSION
void add(double a, double b, double& answer)
{
    double a, b;
    answer = a + b;
}
// NOTES: END INCLUSION

int main()
{
    int answer(0);
    add(1, 2, answer);
    return 0;
}
