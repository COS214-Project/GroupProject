#ifndef QUALIFIER_H
#define QUALIFIER_H
#include "Car.h"
#include "Memento.h"
#include <string>
using namespace std;

class Qualifier {

private:
	Car** topCars;

public:
	Qualifier();
	~Qualifier();
	void setQualifyingTimes(Car**);
	Memento* storeTopTen(Car**);
	
};
#endif