#include "RaceTrack.h"
#include <iostream>
using namespace std;

RaceHandler::RaceHandler(){}

void RaceHandler::next(RaceHandler* n){
	this->successor = n;
}

RaceHandler* RaceHandler::getSuccessor(){
	return this->successor;
}