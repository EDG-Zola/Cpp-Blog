#include "PrivateB.h"



PrivateB::PrivateB(int pbV, int ptV, int pvV, int pbVB) : A(pbV, ptV, pvV),publicValueB(pbVB){
}

void PrivateB::funB() {
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ������public��Ա,���������б����private
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ������protected��Ա,���������б����private
	std::cout << "privateValue = " << privateValue << std::endl;//��ȷ���̳���ͨ����Ԫ�����ܷ��ʻ����private��Ա
	std::cout << "publicValueB = " << publicValueB << std::endl;//��ȷ��public��Ա
	//funA();
	
}

PrivateB::PrivateB() {
}


PrivateB::~PrivateB() {
}
