#include "io.h"

void PointerDefine() {
	int a = 10;
	cout << "a : " << a << endl;
	cout << "&a : " << &a << endl << endl; // &a : &(주소참조) 연산, 주소 출력

	int* pa = &a; // 포인터 변수에 주소값 대입
	cout << "pa : " << pa << endl; // 주소 출력
	cout << "*pa : " << * pa << endl << endl; // 값 출력

	cout << "pa + 1 : " << pa + 1 << endl; // 주소 출력
	cout << "*pa + 1 : " << *pa + 1 << endl; // 값 출력
	cout << "*(pa + 1) : " << *(pa + 1) << endl << endl; // 옆칸 값

	int** ppa = &pa; // 포인터를 참조하는 포인터
	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << *ppa << endl;
	cout << "**ppa : " << **ppa << endl << endl;

	int Array[3] = { 1, 5, 9 };
	cout << "Array : " << Array << endl; // 배열의 첫 번째 위치가 담겨있는 주소
	cout << "Array[0] : " << Array[0] << endl;
	int* pArray = Array; // Array 자체가 주소라서 & 필요 없음
	cout << "pArray : " << pArray << endl; // 첫 번째 원소 값
	cout << "pArray[0] : " << pArray[0] << endl << endl; // 첫 번째 원소 값

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl << endl;

	cout << "Array + 1 : " << Array + 1 << endl;
	cout << "pArray + 1 : " << pArray + 1 << endl;
	cout << "*Array + 1 : " << *Array + 1 << endl; // Array[0]값 + 1
	cout << "*pArray + 1 : " << *pArray + 1 << endl; // Array[0]값 + 1
	cout << "*(Array + 1) : " << *(Array + 1) << endl; // Array[1]값
	cout << "*(pArray + 1) : " << *(pArray + 1) << endl; // Array[1]값
}