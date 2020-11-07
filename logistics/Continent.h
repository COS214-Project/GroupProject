#ifndef CONTINENT_H
#define CONTINENT_H

#include "Container.h"
#include <iostream>
#include "Car.h"
using namespace std;

class Continent {

private:
	Container* carry;
	Car* car;

public:
	Continent();

	~Continent();

	void travel();

	virtual void mode() = 0 ;

	Container* getCarry();

	void setCarry(Container* carry);

	Car* getCar();

	void setCar(Car* car);
};

#endif
