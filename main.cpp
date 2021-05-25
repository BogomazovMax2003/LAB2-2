#include<iostream>
#include"Region.h"
#include"Family.h"
#include"FamilyFromregion.h"
int main() {
	Family family(50000, 4, "Bogomazov");
	Region Moscow("Moscow", 12000, 13000);
	FamilyFromRegion Fam("Moscow", 12000, 13000, 50000, 4, "Bogomazov");
	family.srednieDohod();
	family.printParametrv1();
	Moscow.printParametrv2();
	int a = 0;
	a=Fam.srednieDohod();
	std::cout << a << std::endl;
	Fam.printParametrv1();
}