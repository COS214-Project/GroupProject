#include "Contents.h"

Contents::~Contents() {
	cout<<description<<" destroyed"<<endl;
}

void Contents::show() {
	cout<<description<<" : "<<weight<<endl;
}

int Contents::getWeight() {
	return this->weight;
}

void Contents::setWeight(int weight) {
	this->weight = weight;
}

string Contents::getDescription() {
	return this->description;
}

void Contents::setDescription(string description) {
	this->description = description;
}
