#include "ProtectedB.h"



ProtectedB::ProtectedB() {
}

ProtectedB::ProtectedB(int pbV, int ptV, int pvV, int pbVB) : A(pbV, ptV, pvV), publicValueB(pbVB) {
}


void ProtectedB::funB() {
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ������public��Ա,���������б����protected,���Ա���������ʡ�
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ������protected��Ա,���������б����protected,���Ա���������ʡ�
	std::cout << "privateValue = " << privateValue << std::endl;//��ȷ���̳���ͨ����Ԫ�����ܷ��ʻ����private��Ա
	std::cout << "publicValueB = " << publicValueB << std::endl;//��ȷ��public��Ա
	
}

ProtectedB::~ProtectedB() {
}
