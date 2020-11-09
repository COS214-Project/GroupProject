#include "NewChassis.h"

NewChassis::NewChassis() {
	
	id="NewChassis";
}

NewChassis::NewChassis(string a, int b, int c_int) {
	
	id="NewChassis";
	material=a;
	wheelSize=b;
	weight=c_int;
}

NewChassis::~NewChassis() {
	
}

CarPart* NewChassis::clone() {
	// TODO - implement NewChassis::clone
	NewChassis* cpy = new NewChassis(material,wheelSize,weight);
	return cpy;
}

void NewChassis::info() {
	
	cout<<"Chassis:\n";
	cout<<"\tmaterial: "<<material<<endl;
	cout<<"\twheelSize: "<<wheelSize<<endl;
	cout<<"\tweight: "<<weight<<endl;
}

void NewChassis::compare(CarPart* c) {
	
	if(c->getId()=="NewChassis")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\tmaterial: "<<material<<" : "<<static_cast<NewChassis*>(c)->getMaterial()<<endl;
		cout<<"\twheelSize: "<<wheelSize<<" : "<<static_cast<NewChassis*>(c)->getWheelSize()<<endl;
		cout<<"\tweight: "<<weight<<" : "<<static_cast<NewChassis*>(c)->getWeight()<<endl;
	}
	else if(c->getId()=="CurrentChassis")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\tmaterial: "<<material<<" : "<<static_cast<CurrentChassis*>(c)->getMaterial()<<endl;
		cout<<"\twheelSize: "<<wheelSize<<" : "<<static_cast<CurrentChassis*>(c)->getWheelSize()<<endl;
		cout<<"\tweight: "<<weight<<" : "<<static_cast<CurrentChassis*>(c)->getWeight()<<endl;
	}
}

string NewChassis::getMaterial() {
	return this->material;
}

void NewChassis::setMaterial(string material) {
	this->material = material;
}

int NewChassis::getWheelSize() {
	return this->wheelSize;
}

void NewChassis::setWheelSize(int wheelSize) {
	this->wheelSize = wheelSize;
}

int NewChassis::getWeight() {
	return this->weight;
}

void NewChassis::setWeight(int weight) {
	this->weight = weight;
}
