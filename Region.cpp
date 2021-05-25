#include "Region.h"
#include<iostream>
#include<string>
void Region::printParametrv2() {
	std::cout << "Region-" << name << std::endl;
	std::cout << "QuantityOneFamily-" << quantityOneFamily << std::endl;
	std::cout << "Porogovoe znachenie-" << porZnack << std::endl;
}
Region::Region(std::string region, float a, float b) : name(region), porZnack(b), quantityOneFamily(a) {
	
}