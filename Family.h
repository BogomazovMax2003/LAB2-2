#pragma once
#include <string>
class Family{
protected:
	float cash;
	std::string surname;
	float quantity;
public:
	void printParametrv1();
	float srednieDohod();
	Family(float b, float c, std::string name);
};


