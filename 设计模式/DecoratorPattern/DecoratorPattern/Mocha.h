#pragma once
#ifndef MOCHA_H
#define MOCHA_H

#include<memory>

#include "CondimentDecorator.h"
//ʵ�ֵ���װ���߳�����CondimentDecorator
class Mocha :
	public CondimentDecorator {
public:
	Mocha();
	//�Զ���Ĺ��캯��
	Mocha(std::shared_ptr<Beverage> pB) : pBeverage(pB) {}
	~Mocha();
	double cost() const override;
	std::string getDescription() const override;
private:
	std::shared_ptr<Beverage> pBeverage;//ʹ������ָ�룬ָ��������Beverage
};
#endif // !MOCHA_H



