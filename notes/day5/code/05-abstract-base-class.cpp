/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <vector>

struct Particle {
  int pdg;
};

// NOTES: BEGIN INCLUSION
class EventGenerator {
 public:
  typedef std::vector<Particle> DecayProducts;

  // Virtual destructor with trivial function body
  virtual ~EventGenerator() {}

  virtual DecayProducts generate(const double beta_z_mother) const = 0;
};
// NOTES: END INCLUSION

class FooGenerator : public EventGenerator {
 public:
  virtual DecayProducts generate(const double beta_z_mother) const {
    return std::vector<Particle>(beta_z_mother);
  }
};

int main() {
  EventGenerator* gen = new FooGenerator;
  std::vector<Particle> products = gen->generate(3);
  std::cout << products.size() << "\n";
  return 0;
}
