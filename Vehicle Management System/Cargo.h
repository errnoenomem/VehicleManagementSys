#include "VMS.h"
#ifndef _CARGO_H
#define _CARGO_H

class cargo : public VMS{//Company vehicles used for moving cargo
public:
	cargo(){};//Default constructor
	virtual void set();//Specific set function for this class
	virtual void print();//Specific print function for this class
private:
	string purpose;
	string dName;
	int emplidNum;
	string date;
	string time;
	//New private data members
	string inventory;//Inventory (item name)
	int stock;//stock - amount of this object
	double weight;// weight - weight of total combined objects / data members user inputted
};
#endif