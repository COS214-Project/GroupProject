#include "Car.h"

Car::Car() {

	parts = new CarPart*[4];
	for (int i =0; i < 4; i++)
	{
		parts[i] = new CarPart;
	}
}

Car::Car(string n, string d, string td, string t){
	this->name = n;
	this->driver = d;
	this->testdriver = td;
	this->team = t;
}

Car::~Car() {
	for (int i =0; i < 4; i++)
	{
		parts[i]=nullptr;
		delete parts[i];
		parts[i]=nullptr;
	}

	delete[] parts;
	parts=nullptr;
	
}

void Car::descrption() {
	// TODO - implement Car::descrption
	cout<<"model: SF90\n\n";
	for (int i =0; i < 4; i++)
	{
		parts[i]->info();
	}
	cout<<endl;
	
}

void Car::add(CarPart* p) {

	for (int i =0; i < 4; i++)
	{
		if(parts[i]->getId()=="")
		{
			parts[i]=p;	
			cout<<p->getId()<<" added\n";	
			return;
		}
	}
	
}

void Car::remove(string id) {
	
	for (int i =0; i < 4; i++)
	{
		if(parts[i]->getId()==id)
		{
			parts[i]=nullptr;	
			cout<<id<<" removed\n";	
			return;
		}
	}
}

string Car::getName() {
	return this->name;
}

void Car::setName(string name) {
	this->name = name;
}

string Car::getDriver(){
	return this->driver;
}

string Car::getTestDriver(){
	return this->testdriver;
}

string Car::getTeam(){
	return this->team;
}

int Car::getPosition(){
	return this->position;
}

void Car::setPosition(int pos){
	position = pos;
}

long Car::getTime(){
	return this->qualifyingtime;
}

void Car::setTime(long time){
	qualifyingtime = time;
}
int Car::getPoints(){
	return this->points;
}
	
void Car::setPoints(int points){
	this->points = points;
}
