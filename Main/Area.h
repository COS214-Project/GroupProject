#ifndef AREA_H
#define AREA_H
#include <iostream>
#include <string>
using namespace std;

class Area {                       

public:
	Area();
	Area(string AreaName);
	~Area();
	string getAreaName();
	void setAreaName(string AreaName);
	virtual void add(Area*) = 0;
	string print();
private:
	string AreaName;
};

#endif
