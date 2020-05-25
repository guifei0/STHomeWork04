#pragma once

class PointsInterface {
public:
	PointsInterface();
	PointsInterface(int);
	~PointsInterface();
	int pointSum;
	virtual int getPointsSum() const = 0;
};
