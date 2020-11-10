//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#ifndef SOFTSTRATEGISTS_H
#define SOFTSTRATEGISTS_H
#include "Team.h"

class SoftStrategists: public Team {
public:
    SoftStrategists();
    void changeTyre(Tyre* tyre1);
    string checkTyre();
};


#endif //STRATEGISTS_H
