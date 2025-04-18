#include "student.h"
#include <string> 

student::student()
	:fname("none"), 
	lname("none"), 
	gpa(0.0), 
	gradyr(0), 
	gradsem("none"), 
	enrollyr(0), 
	enrollsem("none"), 
	level("undergrad") 
{}

student::~student(){}

void student::setname(const std::string &first, const std::string &last) {
	fname = first;
	lname = last;
}

void student::setgpa(double g) {
	gpa = g;
}

void student::setgradyr(int yr){
	gradyr = yr;
}

void student::setgradsem(const std::string &sem) {
	gradsem = sem;
}

void student::setenrollyr(int yr) {
	enrollyr = yr;
}

void student::setenrollsem(const std::string &sem) {
	enrollsem = sem;
}

void student::setlevel(const std::string &lvl) {
	level = lvl;
}

std::string student::getname() const {
	return fname + " " + lname;
}

double student::getgpa() const {
	return gpa;
}

int student::getgradyr() const {
	return gradyr;
}

std::string student::getgradsem() const {
	return gradsem;
}

int student::getenrollyr() const {
	return enrollyr;
}

std::string student::getenrollsem() const {
	return enrollsem;
}

std::string student::getlevel() const {
	return level;
}

std::string student::tostring() const {
	std::string info = "name: " + getname() + "\n";
	info += "gpa: " + std::to_string(gpa) + "\n";
	info += "grad year: " + std::to_string(gradyr) + "\n";
	info += "graduating semester: " + gradsem + "\n";
	info += "year enrrolled: " + gradsem + "\n";
	info += "semester enrolled: " + std::to_string(enrollyr) + "\n";
	info += "level: " + level;
	return info;
}

