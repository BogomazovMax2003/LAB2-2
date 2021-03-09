#include "FamilyFromRegion.h"
float FamilyFromRegion::cash() {
	if (GetCash() > GetSrPoReg()) {
		return GetCash();
	}
	else {
		end= GetCash() + GetQR() *Getfamaly();
		return end;
	}
}
FamilyFromRegion::FamilyFromRegion():end(0),Region("",12000,1000),Family(50000,4,"")
{

}