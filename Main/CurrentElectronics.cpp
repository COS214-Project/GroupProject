#include "CurrentElectronics.h"

// private:
// 	string ECUtype;
// 	int MGUpower;
// 	int BatteryEnergy;
CurrentElectronics::CurrentElectronics() {
	
	id="CurrentElectronics";
	
}

CurrentElectronics::CurrentElectronics(string a, int b, int c_int) {
	
	id="CurrentElectronics";
	ECUtype=a;
	MGUpower=b;
	BatteryEnergy=c_int;
	
}

CurrentElectronics::~CurrentElectronics() {
	
}

CarPart* CurrentElectronics::clone() {
	// TODO - implement CurrentElectronics::clone
	CurrentElectronics* cpy = new CurrentElectronics(ECUtype,MGUpower,BatteryEnergy);
	return cpy;
}

void CurrentElectronics::info() {
	// TODO - implement CurrentElectronics::info
	cout<<"Electronics:\n";
	cout<<"\tECUtype: "<<ECUtype<<endl;
	cout<<"\tMGUpower: "<<MGUpower<<endl;
	cout<<"\tBatteryEnergy: "<<BatteryEnergy<<endl;
}

string CurrentElectronics::getECUtype() {
	// TODO - implement CurrentElectronics::getECUtype
	return ECUtype;
}

void CurrentElectronics::setECUtype(string ECUtype) {
	// TODO - implement CurrentElectronics::setECUtype
	this->ECUtype = ECUtype;
}

int CurrentElectronics::getMGUpower() {
	// TODO - implement CurrentElectronics::getMGUpower
	return MGUpower;
}

void CurrentElectronics::setMGUpower(int MGUpower) {
	// TODO - implement CurrentElectronics::setMGUpower
	this->MGUpower=MGUpower;
}

int CurrentElectronics::getBatteryEnergy() {
	// TODO - implement CurrentElectronics::getBatteryEnergy
	return BatteryEnergy;
}

void CurrentElectronics::setBatteryEnergy(int BatteryEnergy) {
	// TODO - implement CurrentElectronics::setBatteryEnergy
	this->BatteryEnergy=BatteryEnergy;
}
