#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H

#include "student.h"

class artstudent : public student {
private:
	std::string artfield;
public: 
	artstudent();
	virtual ~artstudent();
	void setartfield(const std::string &field);
	std::string getartfield() const;
	virtual std::string tostring() const override;
};

#endif
