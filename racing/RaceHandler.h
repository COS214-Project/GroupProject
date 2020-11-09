#ifndef RACEHANDLER_H
#define RACEHANDLER_H
#include "RaceHandler.h"
#include "Qualifier.h"
#include "Car.h"
#include <string>
using namespace std;

class RaceHandler {

protected:
	RaceHandler* successor;
public:
	RaceHandler();
	virtual bool handle(string request) = 0;
	void next(RaceHandler* n);
	virtual void execute(Car**) = 0;
	RaceHandler* getSuccessor();
	
};
#endif