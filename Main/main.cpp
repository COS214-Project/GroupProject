
#include "Car.h"

#include "NewAerodynamics.h"
#include "NewElectronics.h"
#include "NewEngine.h"
#include "NewChassis.h"

#include "CurrentAerodynamics.h"
#include "CurrentElectronics.h"
#include "CurrentEngine.h"
#include "CurrentChassis.h"

#include "AerodynamicsFactory.h"
#include "ElectronicsFactory.h"
#include "EngineFactory.h"
#include "ChassisFactory.h"


int main(){
  
//     forllow order
//       Engineering
//       Testing
//       Simulation
//       Racing Start
//       Logistics
//       Race
      
      
  
  
    cout<<"=============Engineering============\n";
    cout<<"=============Creating New Car For Next Season============\n";
    AerodynamicsFactory* a = new AerodynamicsFactory();
    ElectronicsFactory* b = new ElectronicsFactory();
    EngineFactory* c = new EngineFactory();
    ChassisFactory* d = new ChassisFactory();

    Car* enzo = new Car();
    
    enzo->add(a->build(1,"2.5",0,0));
    enzo->add(b->build(1,"TAG-320B",130,4));
    enzo->add(c->build(1,"v8",14000,900));
    enzo->add(d->build(1,"carbon fibre",13,800));
    
    
  
    enzo->descrption();
  
   cout<<"\n=============Creating Current Car For This Season============\n";

    Car* SF90 = new Car();
  
    CurrentAerodynamics* Ca = new CurrentAerodynamics();
    CurrentElectronics* Cb = new CurrentElectronics();
    CurrentEngine* Cc = new CurrentEngine();
    CurrentChassis* Cd = new  CurrentChassis();
  
    cout<<"\n=============Creating Current Car Parts============\n";
    Ca = a->build(0,"2.8",0,0);
    Cb = b->build(0,"TAG-320",120,4);
    Cc = c->build(0,"v8",12000,900)
    Cd = d->build(0,"carbon fibre",12,740);
  
    
    cout<<"\n=============Creating Copies For Current Car Parts And Adding Them To Car============\n";
    SF90->add(Ca->copy());
    SF90->add(Cb->copy());
    SF90->add(Cc->copy());
    SF90->add(Cd->copy());
   
  
    SF90->descrption();
    
    return 0;
}
