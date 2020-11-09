#include "TrackTraits.h"

TrackTraits::TrackTraits(){
    cout<<"TrackTraits Constructor"<<endl;
}
TrackTraits::TrackTraits(string raceCondition, string direction){
    this->raceCondition = raceCondition;
    this->direction = direction;
    cout<<"A new Track Trait with "<<raceCondition<<" conditions and an "<<direction<<" direction has been constructed"<<endl;
}
string TrackTraits::getCondition(){
    return this->raceCondition;
}
void TrackTraits::setCondition(string raceCondition){
    this->raceCondition = raceCondition;
}
string TrackTraits::getDirection(){
    return direction;
}
void TrackTraits::setDirection(string direction){
    this->direction = direction;
}
TrackTraits::~TrackTraits(){
    cout<<raceCondition<<"TrackTraits Destrcutor"<<endl;
}
string TrackTraits::print(){
    cout<<"Racing Conditions: "<<raceCondition<<endl;
    cout<<"Racing Direction: "<<direction<<endl;
}