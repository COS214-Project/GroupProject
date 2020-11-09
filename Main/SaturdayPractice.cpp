#include "SaturdayPractice.h"
#include <iostream>
using namespace std;

PracticeState* SaturdayPractice::changePractice(int i){
	
	cout << "This is the last practice state" << endl;
	return this;
}
string SaturdayPractice::getSession(){
	cout << "";
	return "Saturday| 1 hour | regular driver";
}

void SaturdayPractice::practice(){

	cout << "Engineers do final tests on the cars" <<endl;
	cout << "Substitute driver learns the track" << endl;
}