/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

// NOTES: BEGIN INCLUSION
namespace Constants {
    const double pi = 3.14159265359;
}

class Shape {
    public:
        virtual ~Shape() {}
        virtual double area() const = 0;
};

class Triangle : public Shape {
    public:
        Triangle(double base, double height)
            : b(base), h(height) {}

        virtual double area() const { return b * h / 2.0; }
    private:
        double b;
        double h;
};

class Circle : public Shape {
    public:
        Circle(double radius)
            : r(radius) {}

        virtual double area() const
        {
            return Constants::pi * r * r;
        }
    private:
        double r;
};

class Rectangle : public Shape {
    public:
        Rectangle(double width, double height)
            : w(width), h(height) {}

        virtual double area() const { return w * h; }
    private:
        double w;
        double h;
};

int main()
{
    Shape* s = new Circle(4);
    std::cout << s->area() << "\n";
    return 0;
}
// NOTES: END INCLUSION
