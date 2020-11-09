#ifndef RACETRACK_H
#define RACETRACK_H
#include "Car.h"
#include "PracticeState.h"
#include "TimeKeeper.h"
#include "Qualifier.h"
#include "RaceHandler.h"
#include <string>
using namespace std;

class RaceTrack {

private:
	Car** cars;
	PracticeState* practice;
	Qualifier* qualifier;
	TimeKeeper* tk;

	Car** qualifiedCars;

public:
	RaceTrack(Car**);
	~RaceTrack();
	string openForPractice();
	string openForQualifier();
	string openForRace();
	string close();
	void setPractice(PracticeState* p);

	void startQualifier();
	
	void setGridOrder();

	void startRace(RaceHandler*);
};
#endif