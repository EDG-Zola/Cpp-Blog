#include "A.h"
#include<iostream>
A::A()
{
}

A::A(int pbV,int ptV, int pvV): 
	publicValue(pbV), protectedValue(ptV), privateValue(pvV)
{
}


A::~A()
{
}

void A::funA()
{
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ�����ڷ���public��Ա
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ�����ڷ���protected��Ա
	std::cout << "privateValue = " << privateValue << std::endl;//��ȷ�����ڷ���private��Ա
}

void A::setPrivateValue(int pv) {
	privateValue = pv;
}

const int & A::getPrivateValue() {
	return privateValue;
	// TODO: �ڴ˴����� return ���
}

