#pragma once
#include <vector>
#include <string>
#define _STD ::std::

class ThingsInterface {
public:
	ThingsInterface();
	~ThingsInterface();

	static _STD vector<_STD pair<_STD string, int > > vecThings;	// �洢��Ʒ
	virtual int getPrice(int) const = 0;
private:
	
};

