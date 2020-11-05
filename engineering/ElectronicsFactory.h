#ifndef ELECTRONICSFACTORY_H
#define ELECTRONICSFACTORY_H
#include "PartsFactory.h"

class ElectronicsFactory : public PartsFactory {


public:
	ElectronicsFactory();

	~ElectronicsFactory();

	CarPart* build(bool current, string a, int b, int c);
};

#endif
