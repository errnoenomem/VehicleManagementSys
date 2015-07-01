#ifndef _VEHICLE_H
#define _VEHICLE_H
#include<iostream>
using namespace std;
class vehicle{//Vehicle class (composition)
public:
	vehicle() { }//Default constructor initializes 2 for each vehicle
	bool empty1(){//bool empty1 (for the sedan)
		if (sedan <= 0){//if sedan is 0, there are no cars of this type left, displays such to user and returns true
			cout << "All Vehicles of this type are in use, please select a different vehicle" << endl;
			return true;
		}
		else
			return false;
	}
	bool empty2(){//bool empty2 (for the pickup)
		if (pickup <= 0){//if pickup is 0, there are no cars of this type left, displays such to user and returns true
			cout << "All Vehicles of this type are in use, please select a different vehicle" << endl;
			return true;
		}
		else
			return false;
	}
	bool empty3(){//bool empty3 (for the minivan)
		if (minivan <= 0){//if minivan is 0, there are no cars of this type left, displays such to user and returns true
			cout << "All Vehicles of this type are in use, please select a different vehicle" << endl;
			return true;
		}
		else
			return false;
	}
	//the vehicle objects, they are static because they are global
	 static int sedan;
	 static int pickup;
	 static int minivan;
};
#endif