#include "FridayAfternoonPractice.h"
#include <iostream>
using namespace std;

PracticeState* FridayAfternoonPractice::changePractice(int i){
	
	PracticeState* practice;

	if (i = 3){
		practice = new SaturdayPractice;
		return practice;
	}
	return this;
}
string FridayAfternoonPractice::getSession(){
	cout << "";
	return "Friday Afternoon | 1.5 hours | regular driver";
}

void FridayAfternoonPractice::practice(){

	cout << "Drivers learn the track" <<endl;
	cout << "Enginneers further test the cars" <<endl;
}