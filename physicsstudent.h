#ifndef PHYSICSSTUDENT_H
#define PHYSICSSTUDENT_H

#include "student.h"

class physicsstudent : public student {
private:
	std::string focus;
public:
	physicsstudent();
	virtual ~physicsstudent();
	void setfocus(const std::string &f);
	std::string getfocus() const;
	virtual std::string tostring() const override;
};
#endif
