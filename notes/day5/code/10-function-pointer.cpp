/* 
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct FourMomentum {
    // trivial implementation for example purposes
    double interval() const
    {
        return t*t - (x*x + y*y + z*z);
    }

    double t;
    double x;
    double y;
    double z;
};

struct Particle {
    // trivial implementation for example purposes
    FourMomentum p;

    const FourMomentum& getFourMomentum() const
    {
        return p;
    }
};

std::vector<Particle> fill_particle_vector(std::string name)
{
    // trivial implementation for example purposes
    std::cout << name << "\n";
    std::vector<Particle> v;
    Particle p;
    p.p.t = 2;
    for (int i = 0; i < 10; ++i)
    {
        p.p.x = i;
        v.push_back(p);
    }
    return v;
}

// NOTES: BEGIN INCLUSION
double interval(const Particle& p)
{
    return p.getFourMomentum().interval();
}

int main()
{
    std::vector<Particle> mu_plus = fill_particle_vector("mu+");
    std::vector<double> inv_masses(mu_plus.size());
    std::transform(mu_plus.begin(), mu_plus.end(),
            std::back_inserter(inv_masses),
            interval);
    std::cout << inv_masses.at(0) << "\n";
}
// NOTES: END INCLUSION
