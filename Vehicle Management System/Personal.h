#include "VMS.h"
#ifndef _PERSONAL_H
#define _PERSONAL_H

class personal : public VMS{//personal use of vehicles class
public:
	personal(){};//Default constructor
	virtual void set();//Overidden set function to make use of this classes private data members
	virtual void print();//Overidden print function to display this specific classes private data members
private:
	string purpose;
	string dName;
	int emplidNum;
	string date;
	string time;
	//New private data members - company and serial
	string company;//Insurance company name
	int serial;//random serial number - needed user input
};
#endif