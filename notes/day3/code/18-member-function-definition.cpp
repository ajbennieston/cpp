/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 * Ignore Unused Parameters: Y
 */

typedef void return_type;
typedef int argument_type;

class ClassName {
    public:
        return_type function_name(argument_type argument_name, ...);
};

// NOTES: BEGIN INCLUSION
return_type ClassName::function_name(argument_type argument_name, ...)
{
    // ...
}
// NOTES: END INCLUSION

int main()
{
    return 0;
}
