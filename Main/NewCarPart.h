#ifndef NEWCARPART_H
#define NEWCARPART_H
#include "CarPart.h"

#include "CurrentElectronics.h"
#include "CurrentChassis.h"
#include "CurrentEngine.h"

class NewCarPart : public CarPart {


public:
	NewCarPart();

	NewCarPart(string a, int b, int c_int);

	virtual ~NewCarPart();

	virtual CarPart* clone();

	virtual void info();

	void compare(CarPart* c);
};

#endif
