#ifndef CRATE_H
#define CRATE_H

#include "compositeContainer.h"
#include "Container.h"
using namespace std;

class Crate : public compositeContainer {

private:
	int capacity;
public:
	Crate(int);

	~Crate();

	int getCapacity();

	void setCapacity(int capacity);
};

#endif
