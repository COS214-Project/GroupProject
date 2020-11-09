#include "TimeKeeper.h"
#include <iostream>
using namespace std;

TimeKeeper::TimeKeeper(Memento* m){
	memento = m;

}

TimeKeeper::~TimeKeeper() {
	delete memento;
}

Memento* TimeKeeper::getMemento() {
	return memento;
}
