#pragma once
#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H
#include "Beverage.h"
//ʵ�־����Beverage������
class HouseBlend :
	public Beverage {
public:
	HouseBlend();
	~HouseBlend();
	double cost() const override;//override��ȷ����Ҫ���ǻ����virtual����
	std::string getDescription() const override;
};

#endif // !HOUSEBLEND_H


