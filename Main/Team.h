//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#ifndef TEAM_H
#define TEAM_H
#include "Engineer.h"
//#include "ConcreteEngineer.h"
#include "Tyre.h"
#include <iostream>
#include <string>
using namespace std;

class Engineer;

class Team {
private:
   Engineer* eng;

protected:
    Tyre* tyre;

public:
    Team(){};
    void setEng(Engineer* Eng){
    	eng=Eng;
    };
    void Tested(){
        eng->notify(this);
    };
    virtual void changeTyre(Tyre* tyre)=0;
    virtual string checkTyre()=0;
};

#endif //TEAM_H
