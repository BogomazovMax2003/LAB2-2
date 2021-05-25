#pragma once
#include<string>
class Region
{
protected:
	float quantityOneFamily;
	float porZnack;
	std::string name;
public:
	Region(std::string region,float a,float b);
	void printParametrv2();
};

