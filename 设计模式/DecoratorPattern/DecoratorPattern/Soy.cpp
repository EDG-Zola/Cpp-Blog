#include "Soy.h"

Soy::Soy() {
	
}


Soy::~Soy() {
}

double Soy::cost() const {
	//����0.15��Ԫ
	////Ҫ�������Soy���ϵļ�Ǯ��������Ҫί�и���װ���߶���pBeverage���Լ����Ǯ
	//Ȼ�����Soy���ϵ�Ǯ���õ������
	return .15 + pBeverage->cost();
}

std::string Soy::getDescription() const {
	//ϣ���ܲ�������������Soy������������ʲô�����ϼӵ���
	
	return (pBeverage->getDescription() + ", Soy");
}
