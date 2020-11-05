#ifndef CURRENTCARPART_H
#define CURRENTCARPART_H
#include "CarPart.h"

class CurrentCarPart : public CarPart {


public:
	CurrentCarPart();

	CurrentCarPart(string a, int b, int c_int);

	virtual ~CurrentCarPart();

	virtual CarPart* clone();

	virtual void info();
};

#endif
