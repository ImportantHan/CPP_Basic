#include <iostream>
#include "Ch11_PureVirtualChild.h"

using namespace std;


void PureVirtualChild::Print() {
	cout << "PureVirtualChild Class" << '\n';
}


void PureVirtualChild::PrintClass() {
	cout << "PureVirtualParent Function Override" << endl;
}