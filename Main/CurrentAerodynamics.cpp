#include "CurrentAerodynamics.h"
#include <string>

CurrentAerodynamics::CurrentAerodynamics(string a, int b, int c_int) {
	// TODO - implement CurrentAerodynamics::CurrentAerodynamics
	id="CurrentAerodynamcis";
	dragCoefficint=stod(a);
}

CurrentAerodynamics::~CurrentAerodynamics() {
}

CarPart* CurrentAerodynamics::clone() {
	// TODO - implement CurrentAerodynamics::clone

	string a=to_string(dragCoefficint);

	CurrentAerodynamics* cpy = new CurrentAerodynamics(a,0,0);
	return cpy;
}

void CurrentAerodynamics::info() {
	// TODO - implement CurrentAerodynamics::info
	cout<<"Aerodynamics:\n";
	cout<<"\tdragCoefficint: "<<dragCoefficint<<endl;
}

double CurrentAerodynamics::getDragCoefficint() {
	return this->dragCoefficint;
}

void CurrentAerodynamics::setDragCoefficint(double dragCoefficint) {
	this->dragCoefficint = dragCoefficint;
}
