#ifndef POSITIONING_H
#define POSITIONING_H
#include "RaceHandler.h"
#include <string>
using namespace std;

class Positioning : public RaceHandler {

private:
	
public:
	Positioning();
	virtual bool handle(string request);
	void execute(Car**);

	
};
#endif