//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#ifndef ENGINEER_H
#define ENGINEER_H
//#include "Team.h"
#include <iostream>
#include <string>
using namespace std;

class Team;

class Engineer {

protected:
    Team** team;

public:
    Engineer();
    virtual void notify(Team*);
};


#endif //ENGINEER_H
