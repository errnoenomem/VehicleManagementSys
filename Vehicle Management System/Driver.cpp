#include "VMS.h"
#include "Company.h"
#include "Personal.h"
#include "Carpool.h"
#include "Cargo.h"
#include "Vehicle.h"
int vehicle::sedan = 2; //initialize these static variables globally so this program will work properly.....
int vehicle::pickup = 2;
int vehicle::minivan = 2;

int main()//Main function, the driver
{
	int a = 0;//declare integer a - selection variable
	int vn;//variable vn (vehicle number)
	int counter = 0;//counter set to 0 for use in pointers
	VMS *tracking[20];//20 objects VMS pointer "tracking"
	while (a != 6){//While a is not 6 (exit)
		cout << "(1) Company (2) Personal (3) Carpool (4) Cargo (5) Return a vehicle (6) Exit" << endl << "Select the appropriate application: ";//Prompts selection
		cin >> a;//selection goes to 'a'
		switch (a){//current pointer will point to the specific use and give the user a number which is used for returning your vehicle (returned function)
		case 1: tracking[counter] = new company(); cout << "YOU ARE USER #" << counter << " PLEASE REMEMBER YOUR USER NUMBER"; counter++; break;//company use, increments counter for the second user
		case 2: tracking[counter] = new personal(); cout << "YOU ARE USER #" << counter << " PLEASE REMEMBER YOUR USER NUMBER"; counter++; break;//personal use, increments counter
		case 3: tracking[counter] = new carpool(); cout << "YOU ARE USER  #" << counter << " PLEASE REMEMBER YOUR USER NUMBER"; counter++; break;//carpool use, increments counter
		case 4: tracking[counter] = new cargo(); cout << "YOU ARE USER #" << counter << " PLEASE REMEMBER YOUR USER NUMBER"; counter++; break;//cargo use, increments counter
		case 5: cout << "Please enter your User #: "; cin >> vn; tracking[vn]->returned(); break;//the user number given is set to vn 
			//and tracking will call the returned function of tracking[number given]
		case 6: exit(1); break;//exit
		}
		cin.ignore();//cin.ignore here for the name getline in the set functions
		if (a != 5)//if a is not 5, the set function will run followed by the print function
		{
			tracking[counter - 1]->set();//set function
			tracking[counter - 1]->print();//print function
		}
	}
	return 0;
}