#ifndef WINDTUNNELTEST_H
#define WINDTUNNELTEST_H

#include "Test.h"
#include "Iterator.h"

#include<list>
#include<iostream>

using namespace std;
class Iterator;
class WindTunnel {
	friend class Iterator;
	protected:
		int tokens; //remaining tests
		int total;
		Test** carTests;
	public:
		WindTunnel();
		void testCar(Car* c);
		Iterator* createIterator(Test** t);
};

#endif