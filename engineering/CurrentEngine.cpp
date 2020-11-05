#include "CurrentEngine.h"

// private:
// 	string type;
// 	int rpm;
// 	int bhp;

CurrentEngine::CurrentEngine(string a, int b, int c_int) {
	// TODO - implement CurrentEngine::CurrentEngine
	id="CurrentEngine";
	type=a;
	rpm=b;
	bhp=c_int;

}

CurrentEngine::~CurrentEngine() {
	
}

CarPart* CurrentEngine::clone() {
	// TODO - implement CurrentEngine::clone
	CurrentEngine* cpy = new CurrentEngine(type,rpm,bhp);
	return cpy;
}

void CurrentEngine::info() {
	// TODO - implement CurrentEngine::info
	cout<<"Engine:\n";
	cout<<"\ttype: "<<type<<endl;
	cout<<"\trpm: "<<rpm<<endl;
	cout<<"\tbhp: "<<bhp<<endl;
}

string CurrentEngine::getType() {
	return this->type;
}

void CurrentEngine::setType(string type) {
	this->type = type;
}

int CurrentEngine::getRpm() {
	return this->rpm;
}

void CurrentEngine::setRpm(int rpm) {
	this->rpm = rpm;
}

int CurrentEngine::getBhp() {
	return this->bhp;
}

void CurrentEngine::setBhp(int bhp) {
	this->bhp = bhp;
}
