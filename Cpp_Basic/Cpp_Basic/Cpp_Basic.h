#pragma once

// Ch01_basic.cpp
void Basic();
void Calc(int Arith1, int Arith2);
void BitwiseOperator();

// Ch02_applied.cpp
void SelectSubject();
void TimesTable();
void Login();
int GuGuDan(int Dan);
int TimePassed();

// Ch03_array.cpp
void DefineArray();
void MissingNumber();
void BubbleSort();
void TwoDimension();

// Ch04_string.cpp
void String();
void Alphabet();

// Ch05_structure.cpp
void Structure();
void Enum();
void CallByValue();

// Ch06_pointer.cpp
void PointerDefine();

// Ch07_dynamic.cpp
void DynamicVariable();

// Ch09_variousclass.cpp
void VariousClass();


// Ch12_template.cpp
int NormalSum(int a, int b);
float NormalSum(float a, float b);
// template(generic in JAVA)
template <typename T>
T TemplateSum(T a, T b) {
	return a + b;
}

// 백준 문제 연습,,,
int Baekjoon();
int Backjoon2884();
int Backjoon11720();
int Backjoon1152();
int Backjoon1157();
int Backjoon2563();