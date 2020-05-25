#include "ThingsContext.h"

ThingsContext::ThingsContext(ThingsInterface* strategy) : thingsStrategy(strategy) {

}

ThingsContext::~ThingsContext() {

}

int ThingsContext::executeGetPrice(int id) const {
	return thingsStrategy->getPrice(id);
}

_STD vector<_STD pair<_STD string, int>> ThingsContext::executeGetAllThings() const {
	return thingsStrategy->vecThings;
}
