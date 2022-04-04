#pragma once
class Bicycle {
public:
	Bicycle(int number);
	Bicycle();
	int setSpeed(int num);
	const int getspeed();
	int increasespeed();
	int reducespeed();
private:
	int speed;
};

Bicycle::Bicycle(int number) {
	speed = number;
}
const int Bicycle::getspeed() {
	return speed;
	
	
}
Bicycle::Bicycle() { speed = 0; }
int Bicycle :: setSpeed(int number) {
	if(number >= 0) { speed = number; } else {}
	return 9;
	
}
int Bicycle::increasespeed() {
	setSpeed(getspeed() + 1);
	return 0;
}
int Bicycle::reducespeed() {
	setSpeed(getspeed() - 1);
	return 0;
}