#pragma once
#include "ani.h"
class fish : public animal {
public:
	fish() : bone(5) {}
	int bone;
	void swim() { cout << "I can swim" << endl; }
};
