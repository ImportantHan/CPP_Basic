#pragma once
#include <iostream>

using namespace std;

class VirtualParent {
public:
	void PrintClass();
};

class VirtualParent2 {
public:
	virtual void PrintClass();
};