#include "Whip.h"



Whip::Whip() {
	
}


Whip::~Whip() {
}

double Whip::cost() const {
	//����0.10��Ԫ
	////Ҫ�������Whip���ϵļ�Ǯ��������Ҫί�и���װ���߶���pBeverage���Լ����Ǯ
	//Ȼ�����Whip���ϵ�Ǯ���õ������

	return .10 + pBeverage->cost();
}

std::string Whip::getDescription() const {
	//ϣ���ܲ�������������Whip������������ʲô�����ϼӵ���
	
	return (pBeverage->getDescription() + ", Whip");
}
