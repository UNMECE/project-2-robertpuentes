#include "artstudent.h"

artstudent::artstudent() : student(), artfield("art studio") {}
artstudent::~artstudent(){}
void artstudent::setartfield(const std::string &field) {
	artfield = field;
}

std::string artstudent::getartfield() const {
	return artfield;
}

std::string artstudent::tostring()const {
	return student::tostring() + "\nart field: " + artfield;
}


