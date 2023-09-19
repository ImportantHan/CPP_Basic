#include <iostream>
#include "Vehicle.h"

using namespace std;

// Constructor ����
Vehicle::Vehicle() {
	cout << "Vehicle Constructor" << '\n';
}

Vehicle::Vehicle(int _Year, int _Price) {
	Year = _Year;
	Price = _Price;

	cout << "���� : ";
	PrintYear();
}

// Destructor ����
Vehicle::~Vehicle() {
	cout << "�ڵ��� Ȯ��" << "\n";
}

void Vehicle::PrintYear() {
	cout << Year << '\n';
}

void Vehicle::PrintPrice() {
	cout << Price << '\n';
}

// Get, Set Method
int Vehicle::GetYear() {
	return Year;
}

void Vehicle::SetYear(int NewYear) {
	Year = NewYear;
}