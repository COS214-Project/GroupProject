#include "RaceTrack.h"
#include <iostream>
using namespace std;

RaceTrack::RaceTrack(Car** carArray){
	
	cars = new Car*[20];
	for (int i = 0; i < 20; ++i) {
		cars[i] = carArray[i];
	}
}

RaceTrack::~RaceTrack(){

	for (int i = 0; i < 20; ++i) {
		delete cars[i];
		cars[i] = nullptr;

	}
	delete [] cars;
	
	delete practice;
	practice = nullptr;
}

string RaceTrack::openForPractice() {
	return "Race Track is open for practice!";
}

string RaceTrack::openForQualifier(){
	return "Race Track is open for qualifying round!";
}

string RaceTrack::openForRace(){
	return "Race Track is open for the RACE!";
}

string RaceTrack::close(){
	return "Race Track is closed.";
}

void RaceTrack::setPractice(PracticeState* p){
	cout << p->getSession() << endl;
}

void RaceTrack::startQualifier() {

	cout << "CARS ARE DOING QUALIFYING LAPS" << endl;
	qualifier = new Qualifier();

	qualifier->setQualifyingTimes(cars);
	Memento* m = qualifier->storeTopTen(cars);
	tk = new TimeKeeper(m);

}

void RaceTrack::setGridOrder() {
	
	Memento* m = tk->getMemento();
	qualifiedCars = m->getCars();

	cout << "THE GRID ORDER SET" <<endl;
	for (int i = 0; i < 10; ++i) {
		cout << i+1 << ". " << qualifiedCars[i]->getTeam() << " - "<< qualifiedCars[i]->getDriver() << "    ";
		
		if (i+1 % 2 != 0) {
			cout << endl;
		}
	}
	cout <<endl;
}

void RaceTrack::startRace(RaceHandler* raceHandler){	

	string stages[3] = {"racing", "positioning", "pointassigning"};

	for (int i = 0; i < 3; ++i){
		bool result = raceHandler->handle(stages[i]);
		if (result){
			raceHandler->execute(qualifiedCars);
		}
		else {
			
		}
	}
}