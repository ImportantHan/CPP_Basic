#pragma once
#include <iostream>

using namespace std;

class Vehicle {
	int Year;

public:
	int Price;

	// Constructor 선언
	Vehicle(int _Year, int _Price);

	// Destructor 선언
	~Vehicle();

	// Method or 멤버함수
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int NewYear);
};