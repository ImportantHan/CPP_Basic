#include "io.h";
#include "Ch10_class.h";

void Car::DriveVelocity() {
	cout << Velocity << "km" << "\n";
}

void Car::DriveTime() {
	int LengthUnit = 100;
	cout << LengthUnit / (Velocity * 1.0) * 60 << "min" << "\n";
}