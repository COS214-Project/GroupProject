#ifndef CURRENTAERODYNAMICS_H
#define CURRENTAERODYNAMICS_H
#include "CurrentCarPart.h"

class CurrentAerodynamics : public CurrentCarPart {

private:
	double dragCoefficint;

public:
	CurrentAerodynamics(string a, int b, int c_int);

	~CurrentAerodynamics();

	CarPart* clone();

	void info();

	double getDragCoefficint();

	void setDragCoefficint(double dragCoefficint);

};

#endif
