#pragma once
#ifndef BEVERAGE_H
#define BEVERAGE_H

#include<string>
//����һ�����ϵĳ������
class Beverage {
public:
	Beverage();
	virtual ~Beverage();//Ϊ��������������������Ϊvirtual
	virtual double cost() const = 0;
	virtual std::string getDescription() const = 0;//��������Ϊ�麯������ÿ��������д�ú���
protected:
	std::string description;
};
#endif // !BEVERAGE_H


