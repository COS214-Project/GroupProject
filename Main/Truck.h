#ifndef TRUCK_H
#define TRUCK_H

#include "compositeContainer.h"
#include "Container.h"
class Truck : public compositeContainer {

private:
	int speed;
	int maxWeight;

public:
	Truck(int, int);

	~Truck();

	int getSpeed();

	void setSpeed(int speed);

	int getMaxWeight();

	void setMaxWeight(int maxWeight);
};

#endif
