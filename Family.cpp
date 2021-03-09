#include "Family.h"
#include<iostream>

void Family::printParametrv1() {
	std::cout << "Surname-" << surname << std::endl;
	std::cout << "Quantity-" << quantity << std::endl;
	std::cout << "Cash-" << GetCash() << std::endl;
}
float Family::srednieDohod() {
	return cash/quantity;
}
void Family::setCash(float b) {
	cash = b;
}
Family::Family(float b, float c, std::string name): cash(b),quantity(c),surname(name) {
	
}