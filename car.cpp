#include "car.h"
void Car::speedUp(float x) {
	speed += x;
};
void Car::speedDown(float x) {
	speed -= x;
}
void Car::setPrice(float x) {
	price = x;
}
float Car::getPrice() {
	return price;
}
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWheels(int n) {
	wheels = n;
}
int Car::getWheels() {
	return wheels;
}
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";
	}
}


float Car::benefit( ){
	return price - cost;
}
void Car::setwheelprice(float x){
	wheelprice += x;
	price += x;
}
void Car::realcost() {
	cost += wheelprice * wheels;
}
void Car::color(int x) {
	colortype = x;
	switch (x) {
	case 0: cout << "color red" << endl; break;
	case 1: cout << "color blue" << endl; break;
	case 2: cout << "color green" << endl; break;
	default: cout << "please enter int value between 0 to 2" << endl; break;
	}
}
void Car::people(int a) {
	if (a <= 4) cout << "이 차를 추천합니다" << endl;
	if (a > 4) cout << "SUV를 추천합니다" << endl;
}
