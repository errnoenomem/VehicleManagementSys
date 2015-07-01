#include "Personal.h"

void personal::set(){
	cout << endl << "Name: ";
	getline(cin, dName);
	cout << "Purpose: ";
	getline(cin, purpose);
	cout << "Employee Identification Number: ";
	cin >> emplidNum;
	cout << "Date(mm/dd/yy): ";
	cin >> date;
	cin.ignore();
	cout << "Time Out(hh:mm AM/PM): ";
	getline(cin, time);
	//cin.ignore();//cin.ignore to prevent errors in the getline call
	//all previous statements are the same as VMS's set, new ones start here
	cout << "Name of insurance provider: ";
	getline(cin, company);//getline of insurance company, user inputted
	cout << "Serial Number: ";
	cin >> serial;//user input of serial number for the insurance company
	setV();
}
void personal::print(){
	int a;
	cout << endl << "Name: " << dName << endl << "Purpose: " << purpose << endl << "Employee Identification Number: " << emplidNum << endl << "Date: " << date << endl << "Time: "
		<< time << endl << "Insurance Provider: " << company << endl << "Serial Number: " << serial << endl;//same function, displays this class specific information
	cout << "Confirm the above information is correct: (1) yes (2) no : ";//Confirmation statement
	cin >> a;
	cin.ignore();
	if (a == 2)
		set();
}