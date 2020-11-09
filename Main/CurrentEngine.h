#ifndef CURRENTENGINE_H
#define CURRENTENGINE_H
#include "CurrentCarPart.h"

class CurrentEngine : public CurrentCarPart {

private:
	string type;
	int rpm;
	int bhp;

public:
	CurrentEngine();

	CurrentEngine(string a, int b, int c_int);

	~CurrentEngine();

	CarPart* clone();

	void info();

	string getType();

	void setType(string type);

	int getRpm();

	void setRpm(int rpm);

	int getBhp();

	void setBhp(int bhp);
};

#endif
