#pragma once
#include "ChargeInterface.h"

class Student : public ChargeInterface {
public:
	Student();
	~Student();

private:
	double charge(double);
};
