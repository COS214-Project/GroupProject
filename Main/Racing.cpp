#include "Racing.h"
#include <iostream>
using namespace std;

Racing::Racing(){

}

bool Racing::handle(string request){
	if (request == "racing"){
		return true;
	}
	else {
		return false;
	}

}

void Racing::execute(Car** cars){
	cout << "The race begins" << endl << endl;
	
	cout << "LAP 5 UPDATE: " << cars[3]->getDriver() << " is in first position followed closely by " << cars[8]->getDriver() << endl;
	cout << "UPDATE: " << cars[6]->getDriver() << " has crashed into " << cars[4]->getDriver() << endl;
	cout << "LAP 10 UPDATE: " << cars[8]->getDriver() << " is in first position followed closely by " << cars[5]->getDriver() << endl;
	cout << "LAP 15 UPDATE: " << cars[7]->getDriver() << " is in first position followed closely by " << cars[8]->getDriver() << endl;
	cout << "LAP 20 UPDATE: " << cars[1]->getDriver() << " is in first position followed closely by " << cars[9]->getDriver() << endl;
	cout << "UPDATE: " << cars[6]->getDriver() << " and " << cars[4]->getDriver() << " have recovered from their earlier collision and are competent again" << endl;
	cout << "LAP 25 UPDATE: " << cars[4]->getDriver() << " is in first position followed closely by " << cars[5]->getDriver() << endl;
	cout << "LAP 30 UPDATE: " << cars[3]->getDriver() << " is in first position followed closely by " << cars[1]->getDriver() << endl;

	cout << endl << "End of race" <<endl;
}