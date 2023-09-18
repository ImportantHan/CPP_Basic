#pragma once

class Arithmatic {
	int Integer;
	float DecimalNumber;

public:
	// 오버로딩
	// void Sum(int _integer);
	// void SumFloat(float _DecimalNumber);
	// ↓
	void Sum(int _Integer);
	void Sum(int _Integer1, int _Integer2);
	void Sum(float _DecimalNumber);
};