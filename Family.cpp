#include "Family.h"
#include<iostream>

void Family::printParametrv1() {
	std::cout << "Surname-" << surname << std::endl;
	std::cout << "Quantity-" << quantity << std::endl;
	std::cout << "Cash-" << cash << std::endl;
	std::cout << "Srednie dohod-" << srednieDohod() << std::endl;
}
float Family::srednieDohod() {
	return cash/quantity;
}
Family::Family(float b, float c, std::string name): cash(b),quantity(c),surname(name) {
	
}