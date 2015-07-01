#include "Vehicle.h"
#ifndef _VMS_H
#define _VMS_H
#include <string>
#include <iostream>
using namespace std;

class VMS{//Class VMS (Vehicle Management System)
public://Utilizes polymorphism via virtual functions
	VMS(){}//The default constructor
	virtual void set();//Set function that prompts the user for information (only company will use this one as the other classes override the set function)
	virtual void print();//Print function dislpays entered information to user, prompts for a confirmation
	virtual void returned();//returned function, all classes use this function - logs the time of return and displays miles traveled and the cost of gas
	virtual void setV();//this function utilizes the composed class (vehicle)
private:
	string purpose;//Purpose of vehicle
	string dName;//Drivers name
	int emplidNum;//Employee ID number
	string date;//Date
	string Time;//Time is used for this class rather than "time" like in the other classes because time.h is included for random number generation
	string rtime;//Return time
	vehicle vehicle;//Composition of vehicle class
};
#endif