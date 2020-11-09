#include "car.h"
#include "Area.h"
#include "Track.h"
#include "TrackDesign.h"
#include "TrackTraits.h"
#include "carPart.h"
#include "TrackType.h"

int main(){

    Area* a = new Track();
    a->setAreaName("Austria");
    cout<<a->getAreaName()<<endl;
    a->add(new Track());
    
    //a = new Track("That New One");
    Track* b = new Track("Red Bull Ring");
    
    //TrackType* c = new TrackType();
    
    TrackDesign* d = new TrackDesign("Race Circuit",4.326);
    
    TrackTraits* e = new TrackTraits("wet","anti-clockwise");

    cout<<endl;

    a->print();
    b->print();
    //c->print();
    d->print();
    e->print();
    
    cout<<endl;
    delete e;
    delete d;
    //delete c;
    delete b;
    delete a;
    return 0;
}