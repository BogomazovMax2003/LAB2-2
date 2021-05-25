#pragma once
#include"Region.h"
#include"Family.h"
#include<iostream>
class FamilyFromRegion : public Family, public Region
{
public:
	float srednieDohod() {
		if (cash / quantity > porZnack)
			return Family::srednieDohod();
		else
			return (cash + quantityOneFamily) / quantity;
	}
	void printParametrv1() {
		std::cout << "Surname-" << surname << std::endl;
		std::cout << "Quantity-" << quantity << std::endl;
		std::cout << "Cash-" << srednieDohod() << std::endl;
		std::cout << "Region-" << name << std::endl;
		std::cout << "QuantityOneFamily-" << quantityOneFamily << std::endl;
		std::cout << "Porogovoe znachenie-" << porZnack << std::endl;
	}
	FamilyFromRegion( std::string  name, float porZnack, float  quantityOneFamily, float cash,float quantity, std::string surname)
		: Region(name, porZnack,  quantityOneFamily), Family(cash, quantity,surname) {}
};

