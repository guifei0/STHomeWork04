#include "PointsThings.h"



PointsThings::PointsThings() {

}

PointsThings::~PointsThings() {

}

int PointsThings::getPrice(int id) const {
	return id >= vecThings.size() ? -1 : vecThings[id].second;
}
