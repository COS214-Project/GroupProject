#ifndef CURRENTCHASSIS_H
#define CURRENTCHASSIS_H
#include "CurrentCarPart.h"

class CurrentChassis : public CurrentCarPart {

private:
	Tyre* tyre;
	string material;
	int wheelSize;
	int weight;

public:
	CurrentChassis(string a, int b, int c_int);

	CurrentChassis();

	CarPart* clone();

	void info();
	
	string getTyre();

	void setTyre(Tyre* t);

	string getMaterial();

	void setMaterial(string material);

	int getWheelSize();

	void setWheelSize(int wheelSize);

	int getWeight();

	void setWeight(int weight);
};

#endif
