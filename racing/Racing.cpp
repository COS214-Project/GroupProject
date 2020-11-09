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
	cout << "The race begins" << endl;
	
	cout << "LAP 5 UPDATE: " << cars[3]->getDriver() << " is in first position followed closely by " << cars[8]->getDriver() << endl;
	cout << "UPDATE: " << cars[6]->getDriver() << " has crashed into " << cars[4]->getDriver() << endl;

	cout << "End of race" <<endl;
}