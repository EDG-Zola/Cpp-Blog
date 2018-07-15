#pragma once
#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H
#include "Beverage.h"
//���ϵĳ������
class CondimentDecorator :
	public Beverage {
public:
	CondimentDecorator();
	virtual ~CondimentDecorator();
	//ʹ���еĵ���װ���Ŷ���������ʵ��getDescription()����
	virtual std::string getDescription() const = 0;
};


#endif // !CONDIMENTDECORATOR_H


