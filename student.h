#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class student {
protected:
	std::string fname;
	std::string lname;
	double gpa;
	int gradyr;
	std::string gradsem;
	int enrollyr;
	std::string enrollsem;
	std::string level;
public:
	student();
	virtual ~student();
	void setname(const std::string &first, const std::string &last);
	void setgpa(double g);
	void setgradyr(int yr);
	void setgradsem(const std::string &sem);
	void setenrollyr(int yr);
	void setenrollsem(const std::string &sem);
	void setlevel(const std::string &lvl);

	std::string getname() const;
	double getgpa() const;
	int getgradyr() const;
	std::string getgradsem() const;
	int getenrollyr() const;
	std::string getenrollsem() const;
	std::string getlevel() const;

	virtual std::string tostring() const;
};

#endif
