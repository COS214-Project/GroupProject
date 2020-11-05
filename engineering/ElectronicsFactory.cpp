#include "ElectronicsFactory.h"
#include "NewElectronics.h"
#include "CurrentElectronics.h"

ElectronicsFactory::ElectronicsFactory() {
	
}

ElectronicsFactory::~ElectronicsFactory() {
	
}

CarPart* ElectronicsFactory::build(bool current, string a, int b, int c) {
	// TODO - implement ElectronicsFactory::build
	if(current) 
	{
		NewElectronics* prt = new NewElectronics(a,b,c);
		return prt;
	}
	else
	{
		CurrentElectronics* prt = new CurrentElectronics(a,b,c);
		return prt;
	}
}
