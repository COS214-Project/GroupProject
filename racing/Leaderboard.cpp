#include "Leaderboard.h"
#include <iostream>
using namespace std;

Leaderboard::Leaderboard(){

}

virtual bool Leaderboard::handle(string request){
	if (request == "leaderboard"){
		return true;
	}
	return false;
}

void Leaderboard::execute(){
	
	cout << "THE LEADERBOARD!" << endl;
	for (int i = 0; i < 20; ++i) {
		if (cars[i]->getTime() != 0){
			cout << 
		}

	}
			
		
}