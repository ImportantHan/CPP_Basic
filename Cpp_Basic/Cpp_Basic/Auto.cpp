#include <iostream>
#include "Auto.h"

using namespace std;

Auto::Auto() {
	cout << "Auto Default Constructor" << '\n';
}

Auto::Auto(int _Year, int _Price) : Vehicle(_Year, _Price) {
	cout << "Auto Parameter Constructor" << '\n';
}