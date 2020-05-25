#pragma once
#include "ChargeInterface.h"
#include "PointsInterface.h"
#include "ThingsContext.h"

class VipUser : public ChargeInterface, public PointsInterface {
public:
	VipUser() = default;
	VipUser(ThingsContext);
	~VipUser();

	double charge(double);	// VIP消费打6折
	int getPointsSum() const;	// 获取当前积分总数
	void queryAllThings() const;	// 查询可以兑换的所有物品
	void exchangeThings(int);	// 兑换当前物品
private:
	int pointSum;
	ThingsContext thingsContext;
};
