#include "Truck.h"

Truck::Truck(int s, int max) {
	// TODO - implement Truck::Truck
	speed = s;
	maxWeight = max;
}

Truck::~Truck() {
	// TODO - implement Truck::~Truck
	//throw "Not yet implemented";
}

int Truck::getSpeed() {
	return this->speed;
}

void Truck::setSpeed(int speed) {
	this->speed = speed;
}

int Truck::getMaxWeight() {
	return this->maxWeight;
}

void Truck::setMaxWeight(int maxWeight) {
	this->maxWeight = maxWeight;
}
