#ifndef SATURDAYPRACTICE_H
#define SATURDAYPRACTICE_H
#include "PracticeState.h"
#include <string>
using namespace std;

class SaturdayPractice : public PracticeState {

private:

public:
	PracticeState* changePractice(int i);
	string getSession();
	void practice();
};
#endif