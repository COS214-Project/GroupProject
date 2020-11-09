#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include "RaceHandler.h"
#include <string>
using namespace std;

class Leaderboard : public RaceHandler {

private:
	
public:
	Leaderboard();
	virtual bool handle(string request);
	void execute();

	
};
#endif