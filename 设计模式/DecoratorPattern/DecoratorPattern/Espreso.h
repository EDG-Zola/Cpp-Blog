#pragma once
#ifndef ESPRESO_H
#define ESPRESO_H

#include "Beverage.h"
//ʵ��һ�������Beverage������
class Espreso :
	public Beverage {
public:
	Espreso();
	~Espreso();
	double cost() const override;//override��ȷ����Ҫ���ǻ����virtual����
	std::string getDescription() const override;
};

#endif // !ESPRESO_H


