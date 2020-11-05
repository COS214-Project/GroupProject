#include "AerodynamicsFactory.h"
#include "NewAerodynamics.h"
#include "CurrentAerodynamics.h"

AerodynamicsFactory::AerodynamicsFactory() {
	
}

AerodynamicsFactory::~AerodynamicsFactory() {

}

CarPart* AerodynamicsFactory::build(bool current, string a, int b, int c) {
	// TODO - implement AerodynamicsFactory::build
	if(current) 
	{
		NewAerodynamics* prt = new NewAerodynamics(a,b,c);
		return prt;
	}
	else
	{
		CurrentAerodynamics* prt = new CurrentAerodynamics(a,b,c);
		return prt;
	}
	
}
