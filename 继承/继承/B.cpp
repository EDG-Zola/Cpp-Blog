#include "B.h"
#include "A.h"
#include<iostream>


B::B() {
}


B::~B() {
}

void B::print() {
	A a(1, 2, 3);
	a.setPrivateValue(5);//�ı�a��˽�б���
	std::cout << "a.privateValue = " << a.privateValue << std::endl;//���a��˽�б�����ֵ
}
