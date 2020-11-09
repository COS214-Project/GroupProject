#ifndef CONTENTS_H
#define CONTENTS_H

#include <iostream>
#include <string>
#include "Container.h"
using namespace std;

class Contents : public Container {

private:
	int weight;
	string description;

public:
	Contents(int w, string des){weight = w; description = des;}
	
	~Contents();

	void show();

	int getWeight();

	void setWeight(int weight);

	string getDescription();

	void setDescription(string description);
};

#endif
