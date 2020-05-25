// STHomeWork04.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/* 程序功能
 * 具体打折方案如下：
 * (1)本商场员工凭工作证购物可享受8折优惠；
 * (2) 学生凭学生证购物可享受每满100减免10元的优惠；
 * (3) VIP用户除享受6折优惠（还可进行积分，积分累计到一定额度可换取奖品): 每次购物商品价格的下取整作为VIP所得积分，VIP随时可以查询积分剩余，同时可以用积分兑换能够兑换的物品(积分足够)
 */

#include <iostream>
#include "Student.h"    // 学生类
#include "VipUser.h"    // VIP用户类
#include "StoreEmployee.h"  // 商店员工类
#include "PointsThings.h"   // 积分物品类
#include "ChargeContext.h"  // 收费上下文角色
#include "PointsContext.h"  // 物品上下文角色
#define _STD ::std::

int main() {
    // -- init: pointsThings,sourceMoney
    double sourceMoney = 160.0;
    PointsThings* expointsThings = new PointsThings();
    // -- 添加两个积分兑换商品
    PointsThings::vecThings.push_back({ "phone-1", 5999.0 });
    PointsThings::vecThings.push_back({ "book-1", 69.0 });
    ThingsContext exThingsContext(expointsThings);
    // -- StoreEmployee
    StoreEmployee* exEmpolyee = new StoreEmployee();
    ChargeContext exCharge(exEmpolyee);
    _STD cout << "Employee: " << exCharge.executeCharge(sourceMoney) << _STD endl;

    // -- Student
    Student* exStudent = new Student();
    exCharge.set_Strategy(exStudent);
    _STD cout << "Student: " << exCharge.executeCharge(sourceMoney) << _STD endl;

    // -- VipUser - Charge
    //VipUser* exVipUser(exThingsContext);
    VipUser* exVipUser = new VipUser(exThingsContext);
    exCharge.set_Strategy(exVipUser);
    _STD cout << "VipUser: " << exCharge.executeCharge(sourceMoney) << _STD endl;
    _STD cout << "Your Points increase! Your Points remaining: " << exVipUser->getPointsSum() << _STD endl;

    // -- VipUser - Point, Change
    exVipUser->queryAllThings();
    int exChangeThingId = 1;
    exVipUser->exchangeThings(exChangeThingId);
       
    delete exVipUser;
    return 0;
}

/* 运行结果
 * Employee: 128
 * Student: 150
 * VipUser: 96
 * Your Points increase! Your Points remaining: 160
 * id: 0  Thing: phone-1  Price(Point): 5999
 * id: 1  Thing: book-1  Price(Point): 69
 * The price of the product is 69.  Exchange Successful!  Your Points remaining: 91
 */
