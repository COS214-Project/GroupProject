#ifndef TRACKTYPE_H
#define TRACKTYPE_H
#include "Area.h"
#include <iostream>
using namespace std;

class TrackType : Area {

public:
	TrackType();
	~TrackType();
	//void addTrackType(Area* TT);
private:
	Area* trackType;
	Area* newTrackType;
};

#endif
