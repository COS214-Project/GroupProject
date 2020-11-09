#ifndef PRACTICESTATE_H
#define PRACTICESTATE_H
#include <string>
using namespace std;

class PracticeState {

private:

public:
	PracticeState();
	virtual PracticeState* changePractice(int i) = 0;
	virtual string getSession() = 0;
	virtual ~PracticeState();

	
};
#endif