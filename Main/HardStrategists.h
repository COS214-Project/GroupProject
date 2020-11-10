//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#ifndef HARDSTRATEGISTS_H
#define HARDSTRATEGISTS_H
#include "Team.h"

class HardStrategists: public Team {
public:
    HardStrategists();
    void changeTyre(Tyre* tyre1);
    string checkTyre();
};


#endif //STRATEGISTS_H
