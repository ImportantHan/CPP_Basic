#pragma once
#include <iostream>
#include "Ch10_VirtualParent.h"

using namespace std;

class VirtualChild:public VirtualParent {
public:
	void PrintClass();
};


class VirtualChild2:public VirtualParent2 {
public:
	virtual void PrintClass();
};