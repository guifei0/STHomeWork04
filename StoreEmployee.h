#pragma once
#include "ChargeInterface.h"

class StoreEmployee : public ChargeInterface {
public:
	StoreEmployee ();
	~StoreEmployee ();

	double charge(double);
private:

};
