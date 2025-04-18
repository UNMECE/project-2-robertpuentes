#include "physicsstudent.h"

physicsstudent::physicsstudent()  
:student(), focus("biophysics") {}
physicsstudent::~physicsstudent() {}

void physicsstudent::setfocus(const std::string &f) {
	focus = f;
}

std::string physicsstudent::getfocus() const {
	return focus;
}

std::string physicsstudent::tostring() const {
	return student::tostring() + "\nfocus: " + focus;
}
