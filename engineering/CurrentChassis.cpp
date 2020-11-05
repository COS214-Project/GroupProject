#include "CurrentChassis.h"

// private:
// 	string material;
// 	int wheelSize;
// 	int weight;

CurrentChassis::CurrentChassis(string a, int b, int c_int) {
	id="CurrentChassis";
	material=a;
	wheelSize=b;
	weight=c_int;
}

CurrentChassis::CurrentChassis() {
	
}

CarPart* CurrentChassis::clone() {
	// TODO - implement CurrentChassis::clone
	CurrentChassis* cpy = new CurrentChassis(material,wheelSize,weight);
	return cpy;
}

void CurrentChassis::info() {
	// TODO - implement CurrentChassis::info
	cout<<"Chassis:\n";
	cout<<"\tmaterial: "<<material<<endl;
	cout<<"\twheelSize: "<<wheelSize<<endl;
	cout<<"\tweight: "<<weight<<endl;
}

string CurrentChassis::getMaterial() {
	return this->material;
}

void CurrentChassis::setMaterial(string material) {
	this->material = material;
}

int CurrentChassis::getWheelSize() {
	return this->wheelSize;
}

void CurrentChassis::setWheelSize(int wheelSize) {
	this->wheelSize = wheelSize;
}

int CurrentChassis::getWeight() {
	return this->weight;
}

void CurrentChassis::setWeight(int weight) {
	this->weight = weight;
}
