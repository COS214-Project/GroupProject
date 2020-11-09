#ifndef PARTSFACTORY_H
#define PARTSFACTORY_H

#include <iostream>
#include "CarPart.h"
using namespace std;

class PartsFactory {


public:
	PartsFactory();

	virtual ~PartsFactory();

	virtual CarPart* build(bool current, string a, int b, int c) = 0;
};

#endif
