#pragma once
#include <iostream>
#include "Ch11_PureVirtualParent.h"

using namespace std;

class PureVirtualChild : public PureVirtualParent {
public :
	virtual void Print();

	void PrintClass() override;
};