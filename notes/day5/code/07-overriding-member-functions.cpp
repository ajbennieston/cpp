/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
class Animal {
    public:
        virtual ~Animal() {}

        virtual void speak()
        {
            std::cout << "I am a nondescript Animal!\n";
        }
};

class Cat : public Animal {
    public:
        virtual void speak()
        {
            std::cout << "I am a highly intelligent cat!"
                      << " Feed me! Meow!\n";
        }
};

class Dog : public Animal {
    public:
        virtual void speak()
        {
            std::cout << "I'm a dumb dog."
                      << " Oh look, a stick. Woof!\n";
        }
};

int main()
{
    Animal* schrodinger = new Cat;
    schrodinger->speak();
    delete schrodinger;
    return 0;
}
// NOTES: END INCLUSION
