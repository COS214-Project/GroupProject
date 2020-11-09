#ifndef MEMENTO_H
#define MEMENTO_H
#include <string>
#include "Car.h"
using namespace std;

class Memento {

private:
	Car** storedCars;

public:
	Memento(Car**);
	~Memento();
	Car** getCars();
	
};
#endif