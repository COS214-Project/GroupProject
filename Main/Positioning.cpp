#include "Positioning.h"
#include <iostream>
using namespace std;

Positioning::Positioning(){

}

bool Positioning::handle(string request){
	if (request == "positioning"){
		return true;
	}
	return false;
}
void Positioning::execute(Car** cars){
	cout << endl << "Allocation of points to the cars" << endl<< endl;
	for (int i = 0; i < 10; ++i) {
			int result = rand () % (10 - 1) + 1;
			cars[i]->setPosition(result);
	}
}
