#ifndef TRACK_H
#define TRACK_H
#include "Area.h"
#include <iostream>
using namespace std;

class Track : public Area {
private:
	string trackName;
	int numTracks;
	Area* newTrack;
public:
	Track();
	Track(string trackName);
	~Track();
	//void add(Area*);
	int total();
	virtual void add(Area*);
	void setTrackName(string trackName);
	string getTrackName();
	string print();
};

#endif
