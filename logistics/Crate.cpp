#include "Crate.h"

Crate::Crate(int c) {
	// TODO - implement Crate::Crate
	capacity = c;
}

Crate::~Crate() {}

int Crate::getCapacity() {
	return this->capacity;
}

void Crate::setCapacity(int capacity) {
	this->capacity = capacity;
}
