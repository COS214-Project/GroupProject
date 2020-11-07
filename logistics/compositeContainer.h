#ifndef COMPOSITECONTAINER_H
#define COMPOSITECONTAINER_H

#include <iostream>
#include <string>
#include <vector>
#include "Container.h"
using namespace std;

class compositeContainer : public  Container {

	private:
		vector<Container*> next;

	public:
		~compositeContainer();

		void addContainer(Container* c);

		void remove();

		compositeContainer();

		void show();
};
#endif

class Container;