#pragma once
#include "car.h"
class SUV : public Car {
private:
	int spareWheels;
	float spareoption;
public:
	void setrealprice();
	void showprice();
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	friend class Engineer;
	void people(int);
};
