#include<iostream>
#include"Region.h"
#include"Family.h"
#include"FamilyFromregion.h"
int main() {
	Family family(50000,4,"Bogomazov");
	Region Moscow("Moscow", 12000, 1000);
	FamilyFromRegion c;
	float z = 0;
	z = c.cash();
	family.setCash(z);
	std::cout << c.end;
}