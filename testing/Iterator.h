#ifndef ITERATOR_H
#define ITERATOR_H
#include<list>
#include"Test.h"
#include"WindTunnel.h"

class Iterator {
	friend class WindTunnel;
	public:
		Iterator(Test** t);
		Test* current();
		void next();
	protected:
		Test** tests;
		int index;
};

#endif

