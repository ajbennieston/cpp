/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

// NOTES: BEGIN INCLUSION
bool add(const double& a, const double& b, double& answer);
// NOTES: END INCLUSION

bool add(const double& a, const double& b, double& answer)
{
    answer = a + b;
    return true;
}

int main()
{
    double x(0);
    if(add(1, 2, x) == true)
        return 0;
    else
        return 1;
}
