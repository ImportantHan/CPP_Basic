#pragma once
#include <iostream>

using namespace std;

class Vehicle {
	int Year;

public:
	int Price;

	// Constructor 명시적 선언
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);

	// Destructor 선언
	~Vehicle();

	// Method or 멤버함수
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int NewYear);
};