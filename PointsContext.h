#pragma once

#include "PointsInterface.h"

class PointsContext : public PointsInterface {
public:
	PointsContext() = default;
	PointsContext(PointsInterface*);
	~PointsContext();
	int executeGetPointsSum() const;

private:
	PointsInterface* pointStrategy;
	
};
