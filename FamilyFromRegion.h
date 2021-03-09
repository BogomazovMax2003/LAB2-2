#pragma once
#include"Region.h"
#include"Family.h"
class FamilyFromRegion : public Family, public Region
{
public:
	float end;
	 float cash();
	 FamilyFromRegion();
};

