#include "FridayMorningPractice.h"
#include "FridayAfternoonPractice.h"

#include <iostream>
using namespace std;

PracticeState* FridayMorningPractice::changePractice(int i){
	
	PracticeState* practice;

	if (i = 2){
		practice = new FridayAfternoonPractice;
		return practice;
	}
	return this;
}
string FridayMorningPractice::getSession(){
	cout << "";
	return "Friday Morning | 1.5 hours | test driver";

}

void FridayMorningPractice::practice(){

	cout << "Engineers test the car with the test driver" <<endl;
}