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

    AerodynamicsFactory* a = new AerodynamicsFactory();
    ElectronicsFactory* b = new ElectronicsFactory();
    EngineFactory* c = new EngineFactory();
    ChassisFactory* d = new ChassisFactory();

    CurrentEngine* eng = new CurrentEngine("v8",1200,1000);
    NewEngine* vng = new NewEngine("v10",100,800);
    NewEngine* vng2 = new NewEngine("v11",700,800);

    vng->compare(eng);
    vng->compare(vng2);
    cout<<endl;
    cout<<endl;


    Car* enzo = new Car();
    enzo->add(b->build(1,"G8",200,300));
    enzo->add(d->build(1,"carbon fibre",13,400));
    enzo->add(c->build(1,"v8",1000,800));
    enzo->add(a->build(1,"2.5",0,0));



    enzo->descrption();
    
    return 0;
}