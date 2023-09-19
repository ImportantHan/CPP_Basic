#pragma once
#include <iostream>

using namespace std;

class Vehicle {
	int Year;

public:
	int Price;

	// Constructor ����� ����
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);

	// Destructor ����
	~Vehicle();

	// Method or ����Լ�
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int NewYear);
};