#ifndef CARPART_H
#define CARPART_H

#include <iostream>
using namespace std;

class CarPart {

protected:
	string id;

public:
	CarPart();

	CarPart(string a, int b, int c_int);

	virtual ~CarPart();

	virtual CarPart* clone();

	virtual void info();

	string getId();

	void setId(string id);
};

#endif
