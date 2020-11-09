#ifndef CURRENTCHASSIS_H
#define CURRENTCHASSIS_H
#include "CurrentCarPart.h"

class CurrentChassis : public CurrentCarPart {

private:
	string material;
	int wheelSize;
	int weight;

public:
	CurrentChassis();

	CurrentChassis(string a, int b, int c_int);

	CarPart* clone();

	void info();

	string getMaterial();

	void setMaterial(string material);

	int getWheelSize();

	void setWheelSize(int wheelSize);

	int getWeight();

	void setWeight(int weight);
};

#endif
