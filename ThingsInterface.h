#pragma once
#include <vector>
#include <string>
#define _STD ::std::

class ThingsInterface {
public:
	ThingsInterface();
	~ThingsInterface();

	static _STD vector<_STD pair<_STD string, int > > vecThings;	// ¥Ê¥¢ŒÔ∆∑
	virtual int getPrice(int) const = 0;
private:
	
};

