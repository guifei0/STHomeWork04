#pragma once
#include "ChargeInterface.h"
#include "PointsInterface.h"
#include "ThingsContext.h"

class VipUser : public ChargeInterface, public PointsInterface {
public:
	VipUser() = default;
	VipUser(ThingsContext);
	~VipUser();

	double charge(double);	// VIP���Ѵ�6��
	int getPointsSum() const;	// ��ȡ��ǰ��������
	void queryAllThings() const;	// ��ѯ���Զһ���������Ʒ
	void exchangeThings(int);	// �һ���ǰ��Ʒ
private:
	int pointSum;
	ThingsContext thingsContext;
};
