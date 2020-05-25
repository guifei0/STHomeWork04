#include "PointsContext.h"

PointsContext::PointsContext(PointsInterface* strategy) : pointStrategy(strategy) {

}

PointsContext::~PointsContext() {

}

int PointsContext::executeGetPointsSum() const {
	return pointStrategy->getPointsSum();
}
