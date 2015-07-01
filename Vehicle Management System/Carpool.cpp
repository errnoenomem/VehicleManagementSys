#include "Carpool.h"

void carpool::set(){
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
	//new statements start here
	cout << "Number of Passengers: ";//Prompts for number of passengers
	cin >> pnum;//user input of number of passengers
	cin.ignore();//cin.ignore to avoid errors for the use of getline below
	for (int i = 0; i < pnum; i++)//for loop, loops on the number of passengers
	{
		cout << "Passenger #" << i+1 << " Name: ";//displays passenger # (i+1, since i starts at 0)
		getline(cin, pList[i]);//getline of full names of passengers
	}
	setV();//calls the setV (setVehicle) function
}
void carpool::print(){
	int a;
	cout << endl << "Name: " << dName << endl << "Purpose: " << purpose << endl << "Employee Identification Number: " << emplidNum << endl << "Date: " << date << endl << "Time: "
		<< time << endl << "List of Passengers: " << endl;//displays class specific information
	for (int i = 0; i < pnum; i++)//uses for loop, looping on the passenger number
	{
		cout << pList[i] << endl;// displays the passenger list number from i (0 - ~)
	}
	cout << "Confirm the above information is correct: (1) yes (2) no : ";//Confirmation statement
	cin >> a;
	cin.ignore();
	if (a == 2)
		set();
}