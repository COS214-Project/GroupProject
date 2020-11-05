#ifndef NEWENGINE_H
#define NEWENGINE_H
#include "NewCarPart.h"

class NewEngine : public NewCarPart {

private:
	string type;
	int rpm;
	int bhp;

public:
	NewEngine(string a, int b, int c_int);

	~NewEngine();

	CarPart* clone();

	void info();

	void compare(CarPart* c);

	string getType();

	void setType(string type);

	int getRpm();

	void setRpm(int rpm);

	int getBhp();

	void setBhp(int bhp);
};

#endif
