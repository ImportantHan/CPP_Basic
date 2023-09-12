#include "io.h"

// 기초
void Basic() {
    cout << "Hello World!\n";
    cout << "Hello World!\n";

    // 외부 입력
    int number;
    cin >> number;
    cout << number << endl;

    // 실수형
    float FloatNum = 1.23;
    double DoubleNum = 1.23232332;
    cout << FloatNum << " & " << DoubleNum;

    // 문자형
    char Text;
    Text = 'A';
    cout << Text << endl;

    string str;
    str = "stirng";
    cout << str << endl;

    bool condition = true;
    cout << condition << endl;
}

// 연산자
void Calc(int arith1, int arith2) {
    int Sum = arith1 + arith2;
    int Sub = arith1 - arith2;
    int Mul = arith1 * arith2;
    int Div = arith1 / arith2;
    int Rest = arith1 % arith2;

    cout << Sum << endl
        << Sub << endl
        << Mul << endl
        << Div << endl
        << Rest << endl;
}

// 비트 연산
void BitwiseOperator() {
    int Bit1 = 15;                // 00001111
    int Bit2 = 20;                // 00010100
    int BitAnd = Bit1 & Bit2;     // 00000100(4)
    int BitShiftLeft = Bit1 << 1; // 00011110(30)
    cout << BitShiftLeft << endl;
}