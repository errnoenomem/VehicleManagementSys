#include "VMS.h"
#include <cstdlib>
#include <time.h>//time.h for random number generation

void VMS::set(){//The set function
	cout << endl << "Name: ";//Display Name, prompting user for their name
	getline(cin, dName);//getline to get full names rather than first name
	cout << "Purpose: "; //Prompts for purpose of using vehicle
	getline(cin, purpose);//getline to get multi worded purposes
	cout << "Employee Identification Number: ";
	cin >> emplidNum;//Takes in the employee ID number
	cout << "Date(mm/dd/yy): ";
	cin >> date;//Takes in the date
	cin.ignore();//cin.ignore for the getline of time
	cout << "Time Out(hh:mm AM/PM): ";
	getline(cin, Time);//Takes in the time, getline because of spacing
	setV();//Calls the setV function below (selecting vehicle)
}
void VMS::print(){
	int a;//integer a to store user selection
	//Displays all information given by user
	cout << endl << "Name: " << dName << endl << "Purpose: " << purpose << endl << "Employee Identification Number: " << emplidNum << endl << "Date: "<< date << endl << "Time in: " << Time << endl;
	cout << "Confirm the above information is correct: (1) yes (2) no : ";//Confirmation (1), if (2) calls the set function again
	cin >> a;
	cin.ignore();
	if (a == 2)
		set();//set function is called if a == 2
	cout << endl;
}
void VMS::returned(){
	srand(time(NULL));//allows different seeds to be used for random generation of miles
	int x = rand() % 50 + 1;//sets x to a random number between 1 and 70, this is used for miles(randomly generated)
	int a;//variable a as a selection holder
	cin.ignore();//cin.ignore for the getline of rtime
	cout << "Return time(hh:mm AM/PM): ";//user input the return time
	getline(cin,rtime);//rtime(return time) is cin'd
	cout << "Select Vehicle Type: " << endl << "1.) Sedan" << endl << "2.) Pickup Truck" << endl << "3.) Minivan" << endl;//prompts user to select vehicle loaned
	cin >> a;//1, 2, or 3 goes into a
	switch (a){//case-switch a
	case 1: vehicle.sedan++; cout << "Vehicle has been returned at " << rtime << endl << "Miles Traveled : " << x << endl << "Cost of Gas : " << 0.20 * x << endl; break;//vehicle sedan ++, the vehicle count goes up since it has been returned
	case 2: vehicle.pickup++; cout << "Vehicle has been returned at " << rtime << endl << "Miles Traveled: " << x << endl << "Cost of Gas: " << 0.36 * x << endl; break;//different cost per mile for each vehicle, e.g trucks uses the most
	case 3: vehicle.minivan++; cout << "Vehicle has been returned at " << rtime << endl << "Miles Traveled: " << x << endl << "Cost of Gas: " << 0.28 * x << endl; break;
	}//Informs user that the vehicle has been returned at the time given, displays miles(randomly generated) and the cost of fuel(20 cents per mile)
}
void VMS::setV(){
	int i = 0; //i variable used to prevent miscounts
	int a;//variable a for selection
	cout << "Select Vehicle Type: " << endl << "1.) Sedan" << endl << "2.) Pickup Truck" << endl << "3.) Minivan" << endl;//This ASKS the user for their vehicle of preference
	cin >> a;//selection is stored into a
	//Following section is an empty check
	if (a == 1)//If the selection is a sedan
		if (vehicle.empty1())/*if function empty1 gives true, no vehicles left will be displayed and the setV function will run once again suggesting user to
			select a different vehicle, if false, continue*/
		{
			setV();//setV function (this current function)
			i = 3; //i becomes 3 if there are no vehicles remaining
		}
		else
			i = 0;
	if (a == 2)//same method but with the pickup vehicle
		if (vehicle.empty2())
		{
			setV();
			i = 3;
		}
	if (a == 3)//same method with the minivan vehicle
		if (vehicle.empty3())
		{
			setV();
			i = 3;
		}
	//if above functions empty functions return false, this function will continue here and subtract 1 from a vehicle, meaning one vehicle is in use and there is one left
	if (i != 3) //if i = 3, this does not function. This is used because switch statement would run even though setV function was called again
	{
		switch (a){
		case 1: vehicle.sedan--; break;//decrement sedan
		case 2: vehicle.pickup--; break;//decrement pickup
		case 3: vehicle.minivan--; break;//decrement minivan
		}
	}
}