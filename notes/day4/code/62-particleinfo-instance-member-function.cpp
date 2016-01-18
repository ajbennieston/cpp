/*
 * C++ Notes Accompanying Code
 * Compile: Y
 * Run: Y
 * Compile Should Succeed: Y
 * Run Should Succeed: Y
 */

#include <iostream>
#include <map>

class ParticleInfo {
 public:
  static const ParticleInfo* Instance();

  // Ordinary member functions:
  int getPDGCode(const std::string& name) const;
  std::string getName(const int id) const;
  int getCharge(const int id) const;
  double getMassMeV(const int id) const;
  double getMassGeV(const int id) const;

 private:
  // Constructors, destructor and assignment
  // operator, all private:
  ParticleInfo();
  ParticleInfo(const ParticleInfo&);
  ~ParticleInfo(){};
  ParticleInfo& operator=(const ParticleInfo&);

  // Pointer to instance:
  static ParticleInfo* theInstance;

  // Ordinary member variables:
  std::map<std::string, int> name_to_id;
  std::map<int, std::string> id_to_name;
  std::map<int, int> id_to_charge;
  std::map<int, double> id_to_mass;
};

// NOTES: BEGIN INCLUSION
ParticleInfo* ParticleInfo::theInstance = 0;

const ParticleInfo* ParticleInfo::Instance() {
  if (theInstance == 0) {
    theInstance = new ParticleInfo;
  }
  return theInstance;
}
// NOTES: END INCLUSION

ParticleInfo::ParticleInfo() {
  name_to_id["mu-"] = 13;
  id_to_name[13] = "mu-";
  id_to_charge[13] = -1;
  id_to_mass[13] = 105.7;  // MeV
}

int ParticleInfo::getPDGCode(const std::string& name) const {
  std::map<std::string, int>::const_iterator iter;
  iter = name_to_id.find(name);
  if (iter != name_to_id.end())
    return iter->second;
  else
    return 0;
}

std::string ParticleInfo::getName(const int id) const {
  std::map<int, std::string>::const_iterator iter;
  iter = id_to_name.find(id);
  if (iter != id_to_name.end())
    return iter->second;
  else
    return std::string("");
}

int ParticleInfo::getCharge(const int id) const {
  std::map<int, int>::const_iterator iter;
  iter = id_to_charge.find(id);
  if (iter != id_to_charge.end())
    return iter->second;
  else
    return 0;
}

double ParticleInfo::getMassMeV(const int id) const {
  std::map<int, double>::const_iterator iter;
  iter = id_to_mass.find(id);
  if (iter != id_to_mass.end())
    return iter->second;
  else
    return 0.0;
}

double ParticleInfo::getMassGeV(const int id) const {
  std::map<int, double>::const_iterator iter;
  iter = id_to_mass.find(id);
  if (iter != id_to_mass.end())
    return iter->second;
  else
    return 0.0;
}

int main() {
  std::cout << "The muon mass is " << ParticleInfo::Instance()->getMassMeV(13)
            << " MeV\n";
  return 0;
}
