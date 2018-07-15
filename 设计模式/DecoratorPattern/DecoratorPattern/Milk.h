#pragma once
#ifndef MILK_H
#define MILK_H
#include "CondimentDecorator.h"
#include<memory>
class Milk :
	public CondimentDecorator {
public:
	Milk();
	Milk(std::shared_ptr<Beverage> pB) : pBeverage(pB) {}
	~Milk();
	double cost() const override;
	std::string getDescription() const override;
private:
	std::shared_ptr<Beverage> pBeverage;//ʹ������ָ�룬ָ��������Beverage
};

#endif // !MILK_H


