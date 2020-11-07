#ifndef CONTINENT_H
#define CONTINENT_H

#include "Container.h"
#include <iostream>
using namespace std;
//#include "Car.h"

class Continent {

private:
	Container* carry;
	//Car* car;

public:
	Continent();

	~Continent();

	void travel();

	virtual void mode() = 0 ;

	Container* getCarry();

	void setCarry(Container* carry);

	//Car* getCar();

	//void setCar(Car* car);
};

#endif
