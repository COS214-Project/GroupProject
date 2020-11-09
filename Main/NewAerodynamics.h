#ifndef NEWAERODYNAMICS_H
#define NEWAERODYNAMICS_H
#include "NewCarPart.h"

using namespace std;
class NewAerodynamics : public NewCarPart {

private:
	double dragCoefficint;
	bool newFrontWing;
	bool newRearWing;
public:

	NewAerodynamics();

	NewAerodynamics(string a, int b, int c_int);

	~NewAerodynamics();

	CarPart* clone();

	void info();

	void compare(CarPart* c);

	double getDragCoefficint();

	void setDragCoefficint(double dragCoefficint);

	bool getNewFrontWing();

	void setNewFrontWing(bool newFrontWing);

	bool getNewRearWing();

	void setNewRearWing(bool newRearWing);
};

#endif
