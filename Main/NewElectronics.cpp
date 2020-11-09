#include "NewElectronics.h"

NewElectronics::NewElectronics() {
		id="NewElectronics";
	

	
}

NewElectronics::NewElectronics(string a, int b, int c_int) {
		id="NewElectronics";
	ECUtype=a;
	MGUpower=b;
	BatteryEnergy=c_int;
	

	
}

NewElectronics::~NewElectronics() {
	
}

CarPart* NewElectronics::clone() {
	
	NewElectronics* cpy = new NewElectronics(ECUtype,MGUpower,BatteryEnergy);
	return cpy;
}

void NewElectronics::info() {
	
	cout<<"Electronics:\n";
	cout<<"\tECUtype: "<<ECUtype<<endl;
	cout<<"\tMGUpower: "<<MGUpower<<endl;
	cout<<"\tBatteryEnergy: "<<BatteryEnergy<<endl;
}

void NewElectronics::compare(CarPart* c) {
	// TODO - implement NewElectronics::compare
	if(c->getId()=="NewElectronics")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\tECUtype: "<<ECUtype<<" : "<<static_cast<NewElectronics*>(c)->getECUtype()<<endl;
		cout<<"\tMGUpower: "<<MGUpower<<" : "<<static_cast<NewElectronics*>(c)->getMGUpower()<<endl;
		cout<<"\tBatteryEnergy: "<<BatteryEnergy<<" : "<<static_cast<NewElectronics*>(c)->getBatteryEnergy()<<endl;
	}
	else if(c->getId()=="CurrentElectronics")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\tECUtype: "<<ECUtype<<" : "<<static_cast<CurrentElectronics*>(c)->getECUtype()<<endl;
		cout<<"\tMGUpower: "<<MGUpower<<" : "<<static_cast<CurrentElectronics*>(c)->getMGUpower()<<endl;
		cout<<"\tBatteryEnergy: "<<BatteryEnergy<<" : "<<static_cast<CurrentElectronics*>(c)->getBatteryEnergy()<<endl;
	}
}

string NewElectronics::getECUtype() {
	// TODO - implement CurrentElectronics::getECUtype
	return ECUtype;
}

void NewElectronics::setECUtype(string ECUtype) {
	// TODO - implement CurrentElectronics::setECUtype
	this->ECUtype = ECUtype;
}

int NewElectronics::getMGUpower() {
	// TODO - implement CurrentElectronics::getMGUpower
	return MGUpower;
}

void NewElectronics::setMGUpower(int MGUpower) {
	// TODO - implement CurrentElectronics::setMGUpower
	this->MGUpower=MGUpower;
}

int NewElectronics::getBatteryEnergy() {
	// TODO - implement CurrentElectronics::getBatteryEnergy
	return BatteryEnergy;
}

void NewElectronics::setBatteryEnergy(int BatteryEnergy) {
	// TODO - implement CurrentElectronics::setBatteryEnergy
	this->BatteryEnergy=BatteryEnergy;
}
