#include "PointAssigning.h"
#include <iostream>
using namespace std;

PointAssigning::PointAssigning(){

}

bool PointAssigning::handle(string request){
	if (request == "pointassigning"){
		return true;
	}
	return false;
}

void PointAssigning::execute(Car** cars){
	
	string* teams = new string[10];
	for (int i = 0; i < 10; ++i){
		teams[i] = cars[i]->getTeam();
	}

	for (int i = 0; i < 10; ++i) {
			
		int pos = cars[i]->getPosition();
		switch (pos) {
			case 1:
				cars[i]->setPoints(25);
				break;
			case 2:
				cars[i]->setPoints(18);
				break;
			case 3:
				cars[i]->setPoints(15);
				break;
			case 4:
				cars[i]->setPoints(12);
				break;
			case 5:
				cars[i]->setPoints(10);
				break;
			case 6:
				cars[i]->setPoints(8);
				break;
			case 7:
				cars[i]->setPoints(6);
				break;
			case 8:
				cars[i]->setPoints(4);
				break;
			case 9:
				cars[i]->setPoints(2);
				break;
			case 10:
				cars[i]->setPoints(1);
				break;
		}
	}

	int index = 0;
	bool added = false;
	string* leaderboard = new string[10];
	
	for (int i = 0; i < 10; ++i) {
		for (int k = 0; k < 10; k++){
			if(teams[i] == leaderboard[k]){
				added = true;
				break;
			}
		}
		
		if(!added) {
			leaderboard[index++] = teams[i];
		}
		
	}


/*	int k = 0;
	while(leaderboard[k] != ""){

		for (int i = 0; i < 10; ++i) {
			if(teams[i] == leaderboard[k]){
				break;
			}
		}

		leaderboard[index++] = teams[i];
		k++;
	}*/

	int* teamScores = new int[index]; 
	int total = 0;
	int k = 0;
	while(k < index){
		total = 0;
		for (int i = 0; i < 10; ++i) {
			if (cars[i]->getTeam() == leaderboard[k]){
				total += cars[i]->getPoints();
			}
		}
		teamScores[k++] = total;
	}



	cout << "THE LEADER BOARD" << endl;
	int l = 0;
	while(l < index){

		int i = 0;
		int largest = 0;
		while (i < 10 && teamScores[i] != -1){
			if (teamScores[i] > largest){
				largest = teamScores[i];
				index = i;
			}
			i++;
		}
		cout << l+1 << ". " << leaderboard[index] << " - " << teamScores[index] << " points." << endl;
		teamScores[index] = 0;
		l++;
	}
	
}