#pragma once

class Animal {
private:
	int Leg;
	int Finger;

public:
	Animal(); // default constructor
	Animal(int _Finger, int _Leg);
	void PrintFinger();
	void PrintLeg();
};