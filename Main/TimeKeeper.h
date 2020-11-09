#ifndef TIMEKEEPER_H
#define TIMEKEEPER_H
#include "Memento.h"
#include <string>
using namespace std;

class TimeKeeper {

private:
	Memento* memento;

public:
	TimeKeeper(Memento* m);
	~TimeKeeper();
	Memento* getMemento();
	
};
#endif