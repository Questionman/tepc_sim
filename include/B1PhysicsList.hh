#include "G4VModularPhysicsList.hh"
#include "G4HadronElasticPhysics.hh"
#include "G4DecayPhysics.hh"
#include "G4HadronPhysicsINCLXX.hh"
#include "G4EmStandardPhysics_option3.hh"
#include "G4IonINCLXXPhysics.hh"

class MyModularList : public G4VModularPhysicsList {
public :
  MyModularList();
};


MyModularList::MyModularList() {
  // Hadronic physics
  RegisterPhysics(new G4HadronElasticPhysics());
  RegisterPhysics(new G4HadronPhysicsINCLXX());
  // EM physics
  RegisterPhysics(new G4EmStandardPhysics_option3());
  // ion physics
  RegisterPhysics(new G4IonINCLXXPhysics());

  RegisterPhysics(new G4DecayPhysics());
}
