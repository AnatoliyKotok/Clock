#pragma once
#include<iostream>
#include<vector>

using namespace std;
__interface IClock12 {
	void setHours(int hours);
	void setMinutes(int minutes);
	void setSeconds(int seconds);
	void addHour();
	void print();
};
class Clock24:public IClock12 {
	int hours;
	int minutes;
	int seconds;
public:
	Clock24(int hours, int minutes, int seconds) {
		if (hours <= 24 ||hours>0&& minutes <= 60||minutes>0 && seconds <= 60||seconds>0) {
			setHours(hours);
			setMinutes(minutes);
			setSeconds(seconds);
		}
		else {
			cout << "Incorect data" << endl;
			return;
		}
	}
	void setHours(int hours) {
		this->hours = hours;
	}
	void setMinutes(int minutes) {
		this->minutes = minutes;
	}
	void setSeconds(int second) {
		this->seconds = second;
	}
	void addHour() {
		if (hours == 23) {
			hours = 00;
			return;
		}
		else {
			hours += 1;
		}
	}
	void print() {
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
};

class Clock12 :public IClock12 {
	int hours;
	int minutes;
	int seconds;
public:
	Clock12(int hours, int minutes, int seconds) {
		if (hours <= 12 || hours > 0 && minutes <= 60 || minutes > 0 && seconds <= 60 || seconds > 0) {
			setHours(hours);
			setMinutes(minutes);
			setSeconds(seconds);
		}
		else {
			cout << "Incorect data" << endl;
			return;
		}
	}
	void setHours(int hours) {
		this->hours = hours;
	}
	void setMinutes(int minutes) {
		this->minutes = minutes;
	}
	void setSeconds(int second) {
		this->seconds = second;
	}
	void addHour() {
		if (hours == 11) {
			hours = 01;
			return;
		}
		else {
			hours += 1;
		}
	}
	void print() {
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
};