#ifndef CHASSISFACTORY_H
#define CHASSISFACTORY_H

#include "PartsFactory.h"

class ChassisFactory :public PartsFactory {


public:
	ChassisFactory();

	~ChassisFactory();

	CarPart* build(bool current, string a, int b, int c);
};

#endif
