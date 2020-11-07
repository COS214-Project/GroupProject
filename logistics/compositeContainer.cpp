#include "compositeContainer.h"

compositeContainer::~compositeContainer() {
	for (std::vector<Container*>::iterator it = next.begin(); it != next.end(); ++it){
		delete *it;
	}
}

void compositeContainer::addContainer(Container *c) {
	next.push_back(c);
}

void compositeContainer::remove() {
	next.pop_back();
}

compositeContainer::compositeContainer() {
}

void compositeContainer::show() {
	for(vector<Container*>::iterator x = next.begin(); x!=next.end(); ++x){
		(*x)->show();
	}
}
