#include "PublicB.h"

PublicB::PublicB() {
}

PublicB::PublicB(int pbV) :publicValueB(pbV){}
void PublicB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//��ȷ��public��Ա
	std::cout << "publicValue = " << publicValue << std::endl;//��ȷ��public�̳�����ʻ����public��Ա,��ֵ�Ƕ����أ�
	std::cout << "protectedValue = " << protectedValue << std::endl;//��ȷ��public�̳�����ʻ����protected��Ա����ֵ�Ƕ����أ�
	//std::cout << "privateValue = " << privateValue << std::endl;//���󣬼̳��಻�ܷ��ʻ����private��Ա,�������ǻ����˽�г�Ա���ܱ��̳�
}

PublicB::~PublicB() {
}
