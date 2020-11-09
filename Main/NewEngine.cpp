#include "NewEngine.h"

NewEngine::NewEngine(string a, int b, int c_int) {
	id="CurrentEngine";
	type=a;
	rpm=b;
	bhp=c_int;
}

NewEngine::~NewEngine() {
	
}

CarPart* NewEngine::clone() {
	NewEngine* cpy = new NewEngine(type,rpm,bhp);
	return cpy;
}

void NewEngine::info() {
	
	cout<<"Engine:\n";
	cout<<"\ttype: "<<type<<endl;
	cout<<"\trpm: "<<rpm<<endl;
	cout<<"\tbhp: "<<bhp<<endl;
}

void NewEngine::compare(CarPart* c) {
	
	if(c->getId()=="NewEngine")
	{
		cout<<"Aerodynamics:\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\ttype: "<<type<<" : "<<static_cast<NewEngine*>(c)->getType()<<endl;
		cout<<"\trpm: "<<rpm<<" : "<<static_cast<NewEngine*>(c)->getRpm()<<endl;
		cout<<"\tbhp: "<<bhp<<" : "<<static_cast<NewEngine*>(c)->getBhp()<<endl;
	}
	else if(c->getId()=="CurrentEngine")
	{
		cout<<"Aerodynamics:\n";
		//cout<<"\t    this  vs  other\n";
		cout<<"\t    this  vs  other\n";
		cout<<"\ttype: "<<type<<" : "<<static_cast<CurrentEngine*>(c)->getType()<<endl;
		cout<<"\trpm: "<<rpm<<" : "<<static_cast<CurrentEngine*>(c)->getRpm()<<endl;
		cout<<"\tbhp: "<<bhp<<" : "<<static_cast<CurrentEngine*>(c)->getBhp()<<endl;
	}
}

string NewEngine::getType() {
	return this->type;
}

void NewEngine::setType(string type) {
	this->type = type;
}

int NewEngine::getRpm() {
	return this->rpm;
}

void NewEngine::setRpm(int rpm) {
	this->rpm = rpm;
}

int NewEngine::getBhp() {
	return this->bhp;
}

void NewEngine::setBhp(int bhp) {
	this->bhp = bhp;
}
