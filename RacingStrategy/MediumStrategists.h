//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#ifndef RACING_STRATEGY_MEDIUMSTRATEGISTS_H
#define RACING_STRATEGY_MEDIUMSTRATEGISTS_H
#include "Team.h"

class MediumStrategists: public Team {
public:
    MediumStrategists();
    void changeTyre(Tyre* tyre1);
    string checkTyre();
};


#endif //RACING_STRATEGY_STRATEGISTS_H
