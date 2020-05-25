#pragma once

class ChargeInterface {
public:
	ChargeInterface();
	~ChargeInterface();

	virtual double charge(double) = 0;
private:
	
};
