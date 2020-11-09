#include "TrackType.h"

TrackType::TrackType(){
    cout<<"TrackType has been constructed."<<endl;
}
TrackType::~TrackType(){
    cout<<"TrackType has been destructed."<<endl;
}

/*void TrackType::addTrackType(Area* TT){
    cout<<"Adding new track";
	if (newTrackType == 0){
            newTrackType = TT;
        } else {
            newTrackType->addTrackType(TT);
        }
}*/