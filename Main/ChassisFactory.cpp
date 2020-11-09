#include "ChassisFactory.h"
#include "NewChassis.h"
#include "CurrentChassis.h"

ChassisFactory::ChassisFactory() {
	
}

ChassisFactory::~ChassisFactory() {
	
}

CarPart* ChassisFactory::build(bool current, string a, int b, int c) {
	// TODO - implement ChassisFactory::build
	if(current) 
	{
		NewChassis* prt = new NewChassis(a,b,c);
		return prt;
	}
	else
	{
		CurrentChassis* prt = new CurrentChassis(a,b,c);
		return prt;
	}
}
