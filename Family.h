#pragma once
#include <string>
class Family{
	float cash;
public:
	void setCash(float b);
	std::string surname;
	float quantity;
	void printParametrv1();
	float srednieDohod();
	float GetCash() { return cash; };
	float Getfamaly() { return quantity; };
	Family(float b, float c, std::string name);
};


