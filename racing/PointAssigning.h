#ifndef POINTASSIGNING_H
#define POINTASSIGNING_H
#include "RaceHandler.h"
#include <string>
using namespace std;

class PointAssigning : public RaceHandler {

private:
	
public:
	PointAssigning();
	virtual bool handle(string request);
	void execute(Car**);

	
};
#endif