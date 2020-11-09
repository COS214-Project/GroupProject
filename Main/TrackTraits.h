#ifndef TRACKTRAITS_H
#define TRACKTRAITS_H
#include <iostream>
#include "Track.h"
using namespace std;

class TrackTraits : Track {
    public:
        TrackTraits();
        TrackTraits(string raceCondition, string direction);
        string getCondition();
        void setCondition(string raceCondition);
        string getDirection();
        void setDirection(string direction);
        ~TrackTraits();
        string print();
    private:
        string raceCondition;
        string direction;
};

#endif