#include <iostream>
#include "Medium.h"
#include "Hard.h"
#include "Soft.h"
#include "ConcreteEngineer.h"
#include "SoftStrategists.h"
#include "MediumStrategists.h"
#include "HardStrategists.h"
using namespace std;
int main() {
    cout<<"==================================Testing Racing Strategy================"<<endl;
    cout<<endl;
    Team** teams= new Team*[4];
    teams[0]= new SoftStrategists();
    teams[1]= new HardStrategists();
    teams[2]= new MediumStrategists();
    teams[3]= new MediumStrategists();
    Tyre* soft=new Soft();
    Tyre* hard=new Hard();
    Tyre* medium=new Medium();
    teams[0]->changeTyre(soft);
    teams[1]->changeTyre(hard);
    teams[2]->changeTyre(hard);
    teams[3]->changeTyre(medium);

    Engineer* engineer=new ConcreteEngineer(teams,4);
    for(int i=0;i<4;i++){
        teams[i]->setEng(engineer);
    }
    cout<<"__________________________Testing Changed_______________________________"<<endl;
    cout<<endl;
    for(int i=0;i<4;i++){
        teams[i]->Tested();
    }
    cout<<endl;
    cout<<"______________________Testing ChangeTyre________________________________"<<endl;
    cout<<endl;
    teams[0]->changeTyre(medium);
    teams[1]->changeTyre(soft);
    teams[2]->changeTyre(medium);
    teams[3]->changeTyre(hard);
    cout<<endl;
    cout<<"______________________Testing CheckTyre_________________________________"<<endl;
    cout<<endl;
    cout<<"The car has the following tyres: "<<endl;
    for(int i=0;i<4;i++){
        
    	cout<<teams[i]->checkTyre()<<" Tyre"<<endl;
    }
    cout<<endl;
    
    return 0;
}
