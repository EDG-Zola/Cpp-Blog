#include "ProtectedB.h"



ProtectedB::ProtectedB() {
}

ProtectedB::ProtectedB(int pbV): publicValueB(pbV) {
}


void ProtectedB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//��ȷ��public��Ա
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ������public��Ա,���������б����protected,���Ա���������ʡ�����ֵ�Ƕ����أ�
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ������protected��Ա,���������б����protected,���Ա���������ʡ�����ֵ�Ƕ����أ�
	//std::cout << "privateValue = " << privateValue << std::endl;//���󣬻���private��Ա,���ܱ���������ʡ��������ǻ����˽�г�Ա���ܱ��̳С�
}

ProtectedB::~ProtectedB() {
}
