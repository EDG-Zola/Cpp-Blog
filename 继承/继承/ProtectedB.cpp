#include "ProtectedB.h"



ProtectedB::ProtectedB() {
}

ProtectedB::ProtectedB(int pbV): publicValueB(pbV) {
}


void ProtectedB::funB() {
	std::cout << "publicValueB = " << publicValueB << std::endl;//正确，public成员
	std::cout << "publicValue = " << publicValue << std::endl;//正确，基类public成员,在派生类中变成了protected,可以被派生类访问。但是值是多少呢？
	std::cout << "protectedValue = " << protectedValue << std::endl;//正确，基类protected成员,在派生类中变成了protected,可以被派生类访问。但是值是多少呢？
	//std::cout << "privateValue = " << privateValue << std::endl;//错误，基类private成员,不能被派生类访问。
}

ProtectedB::~ProtectedB() {
}
