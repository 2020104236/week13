#pragma once
#include<iostream>
using namespace std;
class Car {
public:
	Car() :speed(0.1), wheels(4), price(20),
		colortype(0), wheelprice(1.7),cost(10){};
	Car(float, int, float);
	float speed; int wheels; int colortype;
	void realcost();
	void color(int);
	void setPrice(float);
	float getPrice();
	void speedChange(float);
	void setWheels(int);
	int getWheels();
	void klaxon(int);

	virtual void people(int);

	friend class Engineer;

private:
	float cost;
	void speedUp(float);
	void speedDown(float);
	float benefit( );

protected:
	float price; float wheelprice;
	void setwheelprice(float);
};

