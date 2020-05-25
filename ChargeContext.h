#pragma once
#include "ChargeInterface.h"

class ChargeContext {
public:
	ChargeContext() = default;
	ChargeContext(ChargeInterface* strategy);
	~ChargeContext();

	double executeCharge(double) const;
	void set_Strategy(ChargeInterface* strategy);
private:
	ChargeInterface* chargeStrategy;
	
};

