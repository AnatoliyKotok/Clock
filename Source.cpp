#include<iostream>
#include"Clock24.h"
using namespace std;

int main() {
	IClock12 *clock=new Clock24(23, 45, 56);
	clock->addHour();
	clock->print();
	IClock12* clock12 = new Clock12(11, 45, 34);
	clock12->addHour();
	clock12->print();
	delete clock;
	delete clock12;
}