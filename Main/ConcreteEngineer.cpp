//
// Created by Phadimane Lerefolo on 2020/11/09.
//

#include "ConcreteEngineer.h"

ConcreteEngineer::ConcreteEngineer(Team** team1,int size){
	team= new Team*[size];
    //teams[0]= new SoftStrategists();
    //teams[1]= new HardStrategists();
    //teams[2]= new MediumStrategists();
	for(int i=0;i<size;i++){
		team[i]=team1[i];
	}
}

ConcreteEngineer::ConcreteEngineer() {
	
}

void ConcreteEngineer::notify(Team *team) {
    Tyre* tyre;
    if(team->checkTyre()=="Hard"){
    	cout<<"The tyres of the car being changed to all Hard tyres."<<endl;
    	tyre=new Hard();
    }else if(team->checkTyre()=="Soft"){
    	cout<<"The tyres of the car being changed to all Soft tyres."<<endl;
    	tyre=new Soft();
    }else{
    	cout<<"The tyres of the car being changed to all Medium tyres."<<endl;
    	tyre=new Medium();
    }
    
    for(int i=0;i<size;i++){
        team[i].changeTyre(tyre);
    }
}
