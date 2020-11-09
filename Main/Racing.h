#ifndef RACING_H
#define RACING_H
#include "RaceHandler.h"
#include "Car.h"
#include <string>
using namespace std;

class Racing : public RaceHandler {

private:
	
public:
	Racing();
	virtual bool handle(string request);
	void execute(Car**);

	
};
#endif