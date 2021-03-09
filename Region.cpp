#include "Region.h"
#include<iostream>
#include<string>
void printParametrv2(Region& region) {
	std::cout << "Name-" << region.name << std::endl;
	std::cout << "QuantityOneFamily-" << region.quantityOneFamily << std::endl;
	std::cout << "Porogovoe znachenie-" << region.porZnack << std::endl;
}
Region::Region(std::string region, float a, float b) : name(region), porZnack(b), quantityOneFamily(a) {
	
}