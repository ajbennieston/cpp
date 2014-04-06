/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>

namespace Physics {

    struct ThreeVector {
        // trivial implementation for testing only
        double x;
        double y;
        double z;
    };

    struct FourVector {
        // trivial implementation for testing only
        const ThreeVector& getThreeVector() const { return v3; }
        ThreeVector v3;
        double t;
    };

    class Particle {
        public:
            const ThreeVector& getThreeMomentum() const;
        private:
            FourVector momentum;
    };

} // namespace Physics

// NOTES: BEGIN INCLUSION
const Physics::ThreeVector&
Physics::Particle::getThreeMomentum() const
{
    return momentum.getThreeVector();
}
// NOTES: END INCLUSION

int main()
{
    Physics::Particle p;
    std::cout << p.getThreeMomentum().x << "\n";
    return 0;
}
