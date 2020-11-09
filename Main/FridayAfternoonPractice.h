#ifndef FRIDAYAFTERNOONPRACTICE_H
#define FRIDAYAFTERNOONPRACTICE_H
#include "SaturdayPractice.h"

#include "PracticeState.h"
#include <string>
using namespace std;

class FridayAfternoonPractice : public PracticeState {

private:

public:
	PracticeState* changePractice(int i);
	string getSession();
	void practice();
	
};
#endif