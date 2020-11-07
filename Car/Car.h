#ifndef CAR_H
#define CAR_H
#include "CarPart.h"
#include <iostream>
using namespace std;


class Car {

private:
	CarPart** parts;
	string name;
	string driver;
	string team;
	string testdriver;
	int position;
	long qualifyingtime;

public:
	Car();
	
	Car(string n, string d, string td, string t);

	~Car();

	void descrption();

	void add(CarPart* p);

	void remove(string id);

	string getName();

	void setName(string name);
	
	string getDriver();
	
	string getTestDriver();
	
	string getTeam();
	
	int getPosition();
	
	void setPosition(int pos);
	
	long getTime();
	
	void setTime(long time);
	
	
	
};

#endif
