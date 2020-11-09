#include "Continent.h"

Continent::Continent() {
	
}

Continent::~Continent() {
	
}

void Continent::travel() {
	cout<<"The cars are being flown to the meat"<<endl;
	//getCar()->description();
}


Container* Continent::getCarry() {
	return this->carry;
}

void Continent::setCarry(Container* carry) {
	this->carry = carry;
}

Car* Continent::getCar() {
	return this->car;
}

void Continent::setCar(Car* car) {
	this->car = car;
}
