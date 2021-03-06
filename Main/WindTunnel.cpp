#include "WindTunnel.h"

WindTunnel::WindTunnel(){
	total = 400;
	tokens = total;
	carTests = new Test*[total];
	for(int i = 0; i < total; i++){
		carTests[i] = new Test();
	}
}

Iterator* WindTunnel::createIterator(Test** t){
	return new Iterator(t);
}

void WindTunnel::testCar(Car* c){
	if(tokens>0){
		Iterator * it = createIterator(carTests);
		it->current()->test(c);
		it->next();
		tokens--;
		cout<<"Your team has "<<tokens<<" test tokens remaining.\n\n";
	}
	else{
		cout<<"You have run out of tokens"<<endl;
	}
}