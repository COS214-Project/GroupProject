#include "Race.h"
#include <iostream>
using namespace std;

Race::Race(RaceHandler* raceHandler) {
	for (int i = 0; i < 4; ++i){
		bool result = raceHandler->handle(stages[i]);
		if (result){
			raceHandler->execute();
		}
	}
}

Race::~Race(){
	delete [] stages;
}