#pragma once
#include "ThingsInterface.h"
#include <vector>
#include <string>
#define _STD ::std::

class ThingsContext {
public:
	ThingsContext() = default;
	ThingsContext(ThingsInterface*);
	~ThingsContext();

	int executeGetPrice(int) const;
	_STD vector<_STD pair<_STD string, int > > executeGetAllThings() const;	// 获取所有物品
private:
	ThingsInterface* thingsStrategy;
	
};
