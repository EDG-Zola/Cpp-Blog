#include "HouseBlend.h"



HouseBlend::HouseBlend() {
	description = "House Blend Coffee";
}


HouseBlend::~HouseBlend() {
}

double HouseBlend::cost() const {
	return .89;//һ��HouseBlendҪ0.89Ԫ
}

std::string HouseBlend::getDescription() const {
	return description;
}
