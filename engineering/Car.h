#ifndef CAR_H
#define CAR_H
#include "CarPart.h"
#include <iostream>
using namespace std;


class Car {

private:
	CarPart** parts;
	string name;

public:
	Car();

	~Car();

	void descrption();

	void add(CarPart* p);

	void remove(string id);

	string getName();

	void setName(string name);
};

#endif
