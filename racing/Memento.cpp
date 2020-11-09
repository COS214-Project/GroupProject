#include "Memento.h"
#include <iostream>
using namespace std;

Memento::Memento(Car** c) {
	
	storedCars = new Car*[10];
	for (int i = 0; i < 10; i++){
		storedCars[i] = c[i];
	}
}

Memento::~Memento() {
	
	for (int i = 0; i < 10; i++){
		delete storedCars[i];
		storedCars[i] = nullptr;
	}
	delete [] storedCars;
}

Car** Memento::getCars() {
	return storedCars;
}
