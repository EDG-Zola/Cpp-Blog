#include "PublicB.h"

PublicB::PublicB() {
}

PublicB::PublicB(int pbV, int ptV, int pvV, int pbVB) : A(pbV, ptV, pvV), publicValueB(pbVB) {}
void PublicB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//��ȷ��public��Ա
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ��public�̳�����ʻ����public��Ա
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ��public�̳�����ʻ����protected��Ա
	std::cout << "privateValue = " << getPrivateValue() << std::endl;//��ȷ���̳�����ʻ����public��Ա�������Ӷ����ʻ����private��������.
	std::cout << "privateValue = " << privateValue << std::endl;//��ȷ���̳���ͨ����Ԫ�����ܷ��ʻ����private��Ա
}

PublicB::~PublicB() {
}
