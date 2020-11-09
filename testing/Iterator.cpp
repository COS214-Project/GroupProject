#include"Iterator.h"

Iterator::Iterator(Test** t){
	index = 0;
	tests = t;
}

Test* Iterator::current(){
	Test * currTest;
	currTest = tests[index];
	return currTest;
}

void Iterator::next(){
	index++;
}