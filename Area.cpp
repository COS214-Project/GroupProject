#include "Area.h"

Area::Area(){
    //cout<<"Area Constructor"<<endl;
}
Area::Area(string AreaName){
    this->AreaName = AreaName;  
    //cout<<"Area Constructor: "<<AreaName<<endl; 
}
Area::~Area(){
    //cout<<"Area Destructor"<<endl;
}
string Area::getAreaName(){
    return AreaName;
}
void Area::setAreaName(string AreaName){
    this->AreaName = AreaName;
}
string Area::print(){
    cout<<"Area Name: "<<AreaName<<endl;
}