#include "TrackDesign.h"

TrackDesign::TrackDesign(){
    //cout<<"A Circuit has been constructed."<<endl;
}
TrackDesign::TrackDesign(string CircuitName, double trackLength){
    this->CircuitName = CircuitName;
    this->trackLength = trackLength;
    //cout<<"A Circuit called "<<CircuitName<<" has been constructed with a track length of "<<trackLength<<" km."<<endl;
}
string TrackDesign::getDesignName(){
    return this->CircuitName;
}
void TrackDesign::setDesignName(string CircuitName){
    this->CircuitName = CircuitName;
}
TrackDesign::~TrackDesign(){
    //cout<<CircuitName<<" has been destructed"<<endl;
}
double TrackDesign::getTrackLentgh(){
    return this->trackLength;
}
void TrackDesign::setTrackLength(double trackLength){
    this->trackLength = trackLength;
}
string TrackDesign::print(){
    cout<<"Circuit Type: "<<CircuitName<<endl;
    cout<<"Track Length: "<<trackLength<<endl;
}