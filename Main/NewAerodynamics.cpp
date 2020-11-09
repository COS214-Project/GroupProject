#include "NewAerodynamics.h"
#include "CurrentAerodynamics.h"
#include <iostream>

using namespace std;

// private:
// 	double dragCoefficint;
// 	bool newFrontWing;
// 	bool newRearWing;

NewAerodynamics::NewAerodynamics(){
	id="NewAerodynamis";
	
}

NewAerodynamics::NewAerodynamics(string a, int b, int c_int){
	id="NewAerodynamis";
	dragCoefficint=stod(a);
	newFrontWing=b;
	newRearWing=c_int;
}

NewAerodynamics::~NewAerodynamics() {
	
}

CarPart* NewAerodynamics::clone() {
	
	string a=to_string(dragCoefficint);

	NewAerodynamics* cpy = new NewAerodynamics(a,newFrontWing,newRearWing);
	return cpy;
}

void NewAerodynamics::info() {
	
	cout<<"Aerodynamics:\n";
	cout<<"\tdragCoefficint: "<<dragCoefficint<<endl;
	cout<<"\tnewFrontWing: "<<newFrontWing<<endl;
	cout<<"\tnewRearWing: "<<newRearWing<<endl;
}

void NewAerodynamics::compare(CarPart* c) {
	// TODO - implement NewAerodynamics::compare
	if(c->getId()=="NewAerodynamics")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\tdragCoefficint: "<<dragCoefficint<<" : "<<static_cast<NewAerodynamics*>(c)->getDragCoefficint()<<endl;
	}
	else if(c->getId()=="CurrentAerodynamics")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\tdragCoefficint: "<<dragCoefficint<<" : "<<static_cast<CurrentAerodynamics*>(c)->getDragCoefficint()<<endl;
	}
}

double NewAerodynamics::getDragCoefficint() {
	return this->dragCoefficint;
}

void NewAerodynamics::setDragCoefficint(double dragCoefficint) {
	this->dragCoefficint = dragCoefficint;
}

bool NewAerodynamics::getNewFrontWing() {
	return this->newFrontWing;
}

void NewAerodynamics::setNewFrontWing(bool newFrontWing) {
	this->newFrontWing = newFrontWing;
}

bool NewAerodynamics::getNewRearWing() {
	return this->newRearWing;
}

void NewAerodynamics::setNewRearWing(bool newRearWing) {
	this->newRearWing = newRearWing;
}
