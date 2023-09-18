#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal() {
	Finger = 10;
	Leg = 2;
}

void Animal::PrintFinger() {
	cout << Finger << '\n';
}

void Animal::PrintLeg() {
	cout << Leg << '\n';
}