#include "ChargeContext.h"

ChargeContext::ChargeContext(ChargeInterface* strategy) : chargeStrategy(strategy) { 
	
}

ChargeContext::~ChargeContext() {

}

double ChargeContext::executeCharge(double Money) const {
	return chargeStrategy->charge(Money);
}

void ChargeContext::set_Strategy(ChargeInterface* strategy) {
	chargeStrategy = strategy;
}
