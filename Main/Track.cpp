#include "Track.h"

Track::Track(){
	cout<<"Area Constructor"<<endl;
}

Track::Track(string trackName){
	this->trackName = trackName;
	cout<<"A new Area called " + trackName + " has been created."<<endl;
}
Track::~Track(){
	cout<<trackName<<" has been destructed"<<endl;
}
string Track::print() {
	cout<<"You are currently on the " + this->trackName + " track."<<endl;
}
void Track::add(Area* a){
	cout<<"Adding new track";
	if (newTrack == 0){
            newTrack = a;
        } else {
            newTrack->add(a);
        }
}

void Track::setTrackName(string trackName){
	this->trackName = trackName;
}
string Track::getTrackName(){
	return this->trackName;
}
