#include "Espreso.h"



Espreso::Espreso() {
	description = "Espreso";
}


Espreso::~Espreso() {
}

double Espreso::cost() const {
	return 1.99;//һ��EspresoҪ1.99Ԫ
}

std::string Espreso::getDescription() const {
	return description;
}
