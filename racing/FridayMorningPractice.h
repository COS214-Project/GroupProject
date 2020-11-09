#ifndef FRIDAYMORNINGPRACTICE_H
#define FRIDAYMORNINGPRACTICE_H
#include "PracticeState.h"
#include <string>
using namespace std;

class FridayMorningPractice : public PracticeState {

private:

public:
	PracticeState* changePractice(int i);
	string getSession();
	void practice();
	
};
#endif