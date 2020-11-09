#include "FridayMorningPractice.h" 
#include "FridayAfternoonPractice.h" 
#include "SaturdayPractice.h" 
#include "PracticeState.h" 
#include "RaceTrack.h" 
#include "Qualifier.h" 
#include "Memento.h" 
#include "TimeKeeper.h" 
#include "RaceHandler.h" 
#include "Racing.h" 
#include "Positioning.h" 
#include "PointAssigning.h" 
#include "Car.h"

#include <string>
#include <iostream>
using namespace std;

int main(){
	cout << "IT'S THE RACE WEEKEND" << endl << endl;

	Car** cars = new Car*[20];
	cars[0] = new Car("Car20", "Marcus", "Selena", "Team K");
	cars[1] = new Car("Car1", "John", "Andrew", "Team A");
	cars[2] = new Car("Car2", "Matthew", "Jerome", "Team A");
	cars[3] = new Car("Car3", "Luke", "Kevin", "Team B");
	cars[4] = new Car("Car4", "Joseph", "Nick", "Team B");
	cars[5] = new Car("Car5", "Jacob", "Winston", "Team C");
	cars[6] = new Car("Car6", "David", "Ernie", "Team C");
	cars[7] = new Car("Car7", "Paul", "Ryan", "Team D");
	cars[8] = new Car("Car8", "James", "Dylan", "Team D");
	cars[9] = new Car("Car9", "Phillip", "George", "Team E");
	cars[10] = new Car("Car10", "Sally", "Liam", "Team E");
	cars[11] = new Car("Car11", "Cindy", "Adam", "Team F");
	cars[12] = new Car("Car12", "Karen", "Peter", "Team F");
	cars[13] = new Car("Car13", "Kathy", "Simon", "Team H");
	cars[14] = new Car("Car14", "Jill", "Jason", "Team H");
	cars[15] = new Car("Car15", "Mark", "Chris", "Team I");
	cars[16] = new Car("Car16", "Jonathan", "Tyler", "Team I");
	cars[17] = new Car("Car17", "Nathan", "Wayne", "Team J");
	cars[18] = new Car("Car18", "Joel", "Justin", "Team J");
	cars[19] = new Car("Car19", "Harold", "Hailey", "Team K");
	

	RaceTrack* track = new RaceTrack(cars);

	cout << track->openForPractice() << endl;
	PracticeState* one = new FridayMorningPractice;
	track->setPractice(one);
	PracticeState* two = one->changePractice(2);
	track->setPractice(two);
	PracticeState* three = two->changePractice(2);
	track->setPractice(three);
	cout << track->close() << endl << endl;


	cout << track->openForQualifier() << endl;
	track->startQualifier();
	cout << track->close() << endl << endl;

	cout << track->openForRace() << endl;
	track->setGridOrder();

	RaceHandler* racing = new Racing();
	Positioning* positioning = new Positioning();
	PointAssigning* pAssigning = new PointAssigning();

	racing->next(positioning);
	positioning->next(pAssigning);
	//pAssigning->next(racing);

	track->startRace(racing);
	track->startRace(positioning);
	track->startRace(pAssigning);
	cout << track->close() << endl << endl;

	cout << "The end" << endl;
	return 0;
}
