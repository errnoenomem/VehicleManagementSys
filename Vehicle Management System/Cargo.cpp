#include "Cargo.h"

void cargo::set(){
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
	//New statements start here
	cout  << "Inventory: ";
	getline(cin, inventory);//getline of inventory item
	cout << "Inventory Stock: ";
	cin >> stock; //gets the stock of the inventory, amount of items
	cout << "Inventory Weight(pounds): ";
	cin >> weight; //gets the weight in pounds
	setV();
}
void cargo::print(){
	int a;
	cout << endl << "Name: " << dName << endl << "Purpose: " << purpose << endl << "Employee Identification Number: " << emplidNum << endl << "Date: " << date << endl << "Time: "
		<< time << endl << "Inventory: " << inventory << endl << "Inventory Stock: " << stock << endl << "Inventory Weight: " << weight << endl;
		//extra statements inventory, stock and weight
	cout << "Confirm the above information is correct: (1) yes (2) no : ";//Confirmation statement
	cin >> a;
	cin.ignore();
	if (a == 2)
		set();
}