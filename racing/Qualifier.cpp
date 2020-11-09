#include "Qualifier.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

Qualifier::Qualifier() {
}

Qualifier::~Qualifier() {
	
	for (int i = 0; i < 10; i++){
		delete topCars[i];
		topCars[i] = nullptr;
	}
	delete [] topCars;
}

void Qualifier::setQualifyingTimes(Car** cars) {

	srand((unsigned) time(0));

	for (int i = 0; i < 20; i++){
		long result = rand () % (50 - 19) + 19;
		cars[i]->setTime(result);
	}
}

Memento* Qualifier::storeTopTen(Car** cars){

	topCars = new Car*[10];
	for (int i = 0; i < 10; ++i) {
		topCars[i] = new Car();
	}

	int index = 0;
	for (int i = 0; i < 10; i++) {
		long shortest = 100;
		int k = 0;
		if (cars[k]->getTime() != 0) {
			for (; k < 20; k++) {			
				if (cars[k]->getTime() < shortest){
					shortest = cars[k]->getTime();
					index = k;
				}
			}
			topCars[i] = cars[index];
			cars[index]->setTime(100);
		}
		else if (cars[k]->getTime() == 0){
			break;
		}
		
	}

	Memento* m = new Memento(topCars);
	return m;
}
