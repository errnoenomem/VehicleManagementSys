#include "VMS.h"
#include "Vehicle.h"
#ifndef _CARPOOL_H
#define _CARPOOL_H

class carpool : public VMS{//Carpool use of company vehicles
public:
	carpool(){ pnum = 0; }//default constructor sets pnum(passenger number) to 0
	virtual void set();//overidden class specific set function
	virtual void print();//overidden specific print function
private:
	string purpose;
	string dName;
	int emplidNum;
	string date;
	string time;
	//New private data members
	string pList[7];//the passenger list, an array stores up to 8 people (standard seating size of a minivan)
	int pnum;//passenger number
};
#endif