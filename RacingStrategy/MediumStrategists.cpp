//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#include "MediumStrategists.h"

MediumStrategists::MediumStrategists() {

}

void MediumStrategists::changeTyre(Tyre *tyre1) {
	if(tyre!=nullptr){
		cout<<"The strategists changed one tyre in a car from "<<tyre->type()<<" tyre to a "<<tyre1->type()<<" tyre!!"<<endl;
	}
    tyre=tyre1;
}

string MediumStrategists::checkTyre() {
    return tyre->type();
}
