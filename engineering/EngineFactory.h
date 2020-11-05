#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H
#include "PartsFactory.h"

class EngineFactory :public PartsFactory {


public:
	EngineFactory();

	~EngineFactory();

	CarPart* build(bool current, string a, int b, int c);
};

#endif
