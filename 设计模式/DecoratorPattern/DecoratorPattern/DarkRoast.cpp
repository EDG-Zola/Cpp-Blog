#include "DarkRoast.h"



DarkRoast::DarkRoast() {
	description = "DarkRoast";
}


DarkRoast::~DarkRoast() {
}

double DarkRoast::cost() const {
	return .99;//һ���Ҫ0.99��Ԫ
}

std::string DarkRoast::getDescription() const {
	return description;
}
