#include <iostream>
#include "Vehicle.h"

using namespace std;

// Constructor 정의
Vehicle::Vehicle() {
	cout << "Vehicle Constructor" << '\n';
}

Vehicle::Vehicle(int _Year, int _Price) {
	Year = _Year;
	Price = _Price;

	cout << "연식 : ";
	PrintYear();
}

// Destructor 정의
Vehicle::~Vehicle() {
	cout << "자동차 확인" << "\n";
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