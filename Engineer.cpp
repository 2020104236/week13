#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // 
}
void Engineer::truth(Car* xx) {
	cout << "cost : " << xx->cost <<"\n"
		<<"and price : "<<xx->price <<"\n"
		<<"so benefit is " << xx->benefit() << endl;
}
void Engineer::truth(SUV* xx) {
	cout << "cost : " << xx->cost << "\n"
		<< "and price : " << xx->price << "\n"
		<< "so benefit is " << xx->benefit() << endl;
}
