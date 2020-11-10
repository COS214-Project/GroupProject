//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#ifndef CONCRETEENGINEER_H
#define CONCRETEENGINEER_H
//#include "Engineer.h"
#include "Team.h"

#include "Hard.h"
#include "Soft.h"
#include "Medium.h"

class Team;
//class Engineer;

class ConcreteEngineer: public Engineer{
// protected:
//     Team** team;
private:
	int size;
public:
	ConcreteEngineer();
    ConcreteEngineer(Team** team1,int size);
    void notify(Team* team);
};


#endif //CONCRETEENGINEER_H
