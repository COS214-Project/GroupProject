#ifndef RACE_H
#define RACE_H
#include <string>
using namespace std;

class Race {

private:
	string stages[4] = {"racing", "positioning", "pointassigning", "leaderboard"};

public:
	Race(RaceHandler*);
	~Race();
	
};
#endif