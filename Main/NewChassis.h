#ifndef NEWCHASSIS_H
#define NEWCHASSIS_H
#include "NewCarPart.h"

class NewChassis : public NewCarPart {

private:
	string material;
	int wheelSize;
	int weight;

public:
	NewChassis(string a, int b, int c_int);

	~NewChassis();

	CarPart* clone();

	void info();

	void compare(CarPart* c);

	string getMaterial();

	void setMaterial(string material);

	int getWheelSize();

	void setWheelSize(int wheelSize);

	int getWeight();

	void setWeight(int weight);
};

#endif
