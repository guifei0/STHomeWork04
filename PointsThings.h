#pragma once
#include "ThingsInterface.h"

class PointsThings : public ThingsInterface {
public:
	PointsThings();
	~PointsThings();

	int getPrice(int) const;
private:
	
};
