#ifndef TRACKDESIGN_H
#define TRACKDESIGN_H
#include <iostream>
#include "Area.h"
using namespace std;

class TrackDesign : public Area {
    public:
        TrackDesign();
        TrackDesign(string CircuitName, double trackLength);
        string getDesignName();
        void setDesignName(string CircuitName);
        double getTrackLentgh();
        void setTrackLength(double trackLength);
        ~TrackDesign();
        void add(Area*){};
        string print();
    private:
        string CircuitName;
        double trackLength;
};

#endif