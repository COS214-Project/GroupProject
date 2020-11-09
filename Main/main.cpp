
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

#include "WindTunnel.h"
#include "Iterator.h"
#include "Test.h"

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

    Car* enzo = new Car("Enzo","","","");
    
    enzo->add(a->build(1,"2.5",0,0));
    enzo->add(b->build(1,"TAG-320B",130,4));
    enzo->add(c->build(1,"v8",14000,900));
    enzo->add(d->build(1,"carbon fibre",13,800));
    
    
    cout<<endl;
    enzo->description();
  
   cout<<"\n=============Creating Current Car For This Season============\n";

    Car* SF90 = new Car("SF90","","","");
  
    CarPart* Ca = new CurrentAerodynamics();
    CarPart* Cb = new CurrentElectronics();
    CarPart* Cc = new CurrentEngine();
    CarPart* Cd = new  CurrentChassis();
  
    cout<<"\n=============Creating Current Car Parts============\n";
    Ca = a->build(0,"2.8",0,0);
    Cb = b->build(0,"TAG-320",120,4);
    Cc = c->build(0,"v8",12000,900);
    Cd = d->build(0,"carbon fibre",12,740);
  
    
    cout<<"\n=============Creating Copies For Current Car Parts And Adding Them To Car============\n";
    SF90->add(Ca->clone());
    SF90->add(Cb->clone());
    SF90->add(Cc->clone());
    SF90->add(Cd->clone());
   
    cout<<endl;
    SF90->description();

    cout<<"=============Testing============\n";
    cout<<"\n=============Creating Wind Tunnel============\n";
    WindTunnel * tunnel = new WindTunnel();
    cout<<"Test car 5 times"<<endl;
    for(int i = 0; i<5; i++)
        tunnel->testCar(enzo);

    cout<<"=============End Of Testing============\n";

    delete a;
    delete b;
    delete c;
    delete d;

    delete Ca;
    delete Cb;
    delete Cc;
    delete Cd;

    delete enzo;
    delete SF90;



    
    return 0;
}
