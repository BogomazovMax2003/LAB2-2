#pragma once
#include<string>
class Region
{
public:
	std::string name;
	float quantityOneFamily;
	float porZnack;
	Region(std::string region,float a,float b);
	friend void printParametrv2(Region& region);
	float GetSrPoReg() { return porZnack; };
	float GetQR() { return quantityOneFamily; };
};

