#include "PrivateB.h"



PrivateB::PrivateB(int pbV) : publicValueB(pbV){
}

void PrivateB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//��ȷ��public��Ա
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ������public��Ա,���������б����private,���Ա���������ʡ�����ֵ�Ƕ����أ�
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ������protected��Ա,���������б����private,���Ա���������ʡ�����ֵ�Ƕ����أ�
	//std::cout << "privateValue = " << privateValue << std::endl;//���󣬻���private��Ա,���ܱ���������ʡ��������ǻ����˽�г�Ա���ܱ��̳С�
}

PrivateB::PrivateB() {
}


PrivateB::~PrivateB() {
}
