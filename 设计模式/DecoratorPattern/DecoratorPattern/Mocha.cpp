#include "Mocha.h"



Mocha::Mocha() {
	
}


Mocha::~Mocha() {
}



double Mocha::cost() const {
	//Ҫ�������Mocha���ϵļ�Ǯ��������Ҫί�и���װ���߶���pBeverage���Լ����Ǯ
	//Ȼ�����Mocha���ϵ�Ǯ���õ������
	return .20 + pBeverage->cost();
}

std::string Mocha::getDescription() const {
	//ϣ���ܲ�������������Mocha������������ʲô�����ϼӵ���
	
	return (pBeverage->getDescription() + ", Mocha");
}
