#include "VipUser.h"
#include <iostream>
#include <vector>
#include <string>
#define _STD ::std::

VipUser::VipUser(ThingsContext xcThingsContext) : thingsContext(xcThingsContext), pointSum(0) {

}

VipUser::~VipUser() {

}

double VipUser::charge(double Money) {
	pointSum += static_cast<int >(Money);
	return 0.6 * Money;
}

int VipUser::getPointsSum() const {
	return pointSum;
}

void VipUser::queryAllThings() const {
	auto vecThingsTmp = thingsContext.executeGetAllThings();
	int cntTmp = 0;
	for (const auto& thingTmp : vecThingsTmp) {
		_STD cout << "id: " << cntTmp++ << "  Thing: " << thingTmp.first << "  Price(Point): " << thingTmp.second << _STD endl;
	}
}

void VipUser::exchangeThings(int id) {
	int priceTmp = thingsContext.executeGetPrice(id);	// 获取想要兑换商品的价格
	if (priceTmp < 0) {
		_STD cout << "Error! No designated product!" << _STD endl;
	} else if (priceTmp > pointSum) {
		_STD cout << "Insufficient points!" << _STD endl;
	} else {
		pointSum -= priceTmp;
		_STD cout << "The price of the product is " << priceTmp << ".  Exchange Successful!";
		_STD cout << "  Your Points remaining: " << pointSum << _STD endl;
	}
}

