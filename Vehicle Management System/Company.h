#ifndef _COMPANY_H
#define _COMPANY_H
#include "VMS.h"
//NOTE - company does not have any functions of its own since it uses the functions of VMS class via inheritence
class company : public VMS{//Company use of vehicles
public:
	company(){};//default constructor
private://same private data members as VMS class minus the vehicle composition
	string purpose;
	string dName;
	int emplidNum;
	string date;
	string time;
};
#endif