#include "suv.h"
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}

void SUV::setrealprice() {
	spareoption = spareWheels * wheelprice;
	price += spareoption;
}
void SUV::showprice() {
	cout << price << endl;
}
void SUV::people(int a) {
	if (a <= 4) cout << "�� ���� ��õ���� �ʽ��ϴ�" << endl;
	if (a > 4) cout << "�� ���� ��õ�մϴ�" << endl;
}