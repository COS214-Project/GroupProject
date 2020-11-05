#include "EngineFactory.h"
#include "NewEngine.h"
#include "CurrentEngine.h"

EngineFactory::EngineFactory() {
	
}

EngineFactory::~EngineFactory() {
	
}

CarPart* EngineFactory::build(bool current, string a, int b, int c) {
	// TODO - implement EngineFactory::build
	if(current) 
	{
		NewEngine* prt = new NewEngine(a,b,c);
		return prt;
	}
	else
	{
		CurrentEngine* prt = new CurrentEngine(a,b,c);
		return prt;
	}
}
