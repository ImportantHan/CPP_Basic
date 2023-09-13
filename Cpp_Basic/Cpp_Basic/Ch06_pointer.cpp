#include "io.h"

void PointerDefine() {
	int a = 10;
	cout << "a : " << a << endl;
	cout << "&a : " << &a << endl << endl; // &a : &(�ּ�����) ����, �ּ� ���

	int* pa = &a; // ������ ������ �ּҰ� ����
	cout << "pa : " << pa << endl; // �ּ� ���
	cout << "*pa : " << * pa << endl << endl; // �� ���

	cout << "pa + 1 : " << pa + 1 << endl; // �ּ� ���
	cout << "*pa + 1 : " << *pa + 1 << endl; // �� ���
	cout << "*(pa + 1) : " << *(pa + 1) << endl << endl; // ��ĭ ��

	int** ppa = &pa; // �����͸� �����ϴ� ������
	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << *ppa << endl;
	cout << "**ppa : " << **ppa << endl << endl;

	int Array[3] = { 1, 5, 9 };
	cout << "Array : " << Array << endl; // �迭�� ù ��° ��ġ�� ����ִ� �ּ�
	cout << "Array[0] : " << Array[0] << endl;
	int* pArray = Array; // Array ��ü�� �ּҶ� & �ʿ� ����
	cout << "pArray : " << pArray << endl; // ù ��° ���� ��
	cout << "pArray[0] : " << pArray[0] << endl << endl; // ù ��° ���� ��

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl << endl;

	cout << "Array + 1 : " << Array + 1 << endl;
	cout << "pArray + 1 : " << pArray + 1 << endl;
	cout << "*Array + 1 : " << *Array + 1 << endl; // Array[0]�� + 1
	cout << "*pArray + 1 : " << *pArray + 1 << endl; // Array[0]�� + 1
	cout << "*(Array + 1) : " << *(Array + 1) << endl; // Array[1]��
	cout << "*(pArray + 1) : " << *(pArray + 1) << endl; // Array[1]��
}