#include "CarPart.h"

CarPart::CarPart(){
	id="";
}

CarPart::CarPart(string a, int b, int c_int) {
}

CarPart::~CarPart() {

}

CarPart* CarPart::clone() {
	return nullptr;
}

void CarPart::info() {

}

string CarPart::getId() {
	return this->id;
}

void CarPart::setId(string id) {
	this->id = id;
}
