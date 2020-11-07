#include "EU.h"
#include "International.h"
#include "Continent.h"
#include "Contents.h"
#include "compositeContainer.h"
#include "Truck.h"
#include "Crate.h"
using namespace std;

int main(int argc, char const *argv[])
{
    //creating  EU
    Continent *eu = new EU();
    Container *c;
    c = new compositeContainer();
    c = new  Truck(150, 200);
    c->addContainer(new Contents(10, "Motor equipement"));
    c->addContainer(new Contents(30, "Catering equipment"));
    c->addContainer(new Contents(50, "Garage equipment"));
    eu->setCarry(c);
    eu->travel();
    eu->mode();
    cout<<endl<<endl;
    
    //creating International
    Continent *i = new International();
    Container *p;
    p = new compositeContainer();
    p = new  Crate(1500);
    p->addContainer(new Contents(10, "Motor  equipment"));
    p->addContainer(new Contents(30, "Catering  equipment"));
    p->addContainer(new Contents(50, "Garage  equipment"));
    i->setCarry(p);
    i->travel();
    i->mode();

    cout<<endl;
    delete i;
    delete p;
    delete c;
    delete eu;
    return 0;
}