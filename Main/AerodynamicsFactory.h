#ifndef AERODYNAMICSFACTORY_H
#define AERODYNAMICSFACTORY_H

#include "PartsFactory.h"

class AerodynamicsFactory :public PartsFactory {


public:
	AerodynamicsFactory();

	~AerodynamicsFactory();

	CarPart* build(bool current, string a, int b, int c);
};

#endif
