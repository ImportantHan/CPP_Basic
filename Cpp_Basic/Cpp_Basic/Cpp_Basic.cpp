// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ����� ��� ����
#include "Cpp_Basic.h"
#include "io.h"

#include "Ch08_class.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Auto.h"

#include "Arithmatic.h"

int main()
{
	//Baekjoon();

	// vehicle Ŭ���� ��������(����) - ����� �ν��Ͻ�
	Vehicle ray(2023, 10000000);
	cout << "1�� ���� : ";
	ray.PrintPrice();
	// public ���� ����(�ܺμ��� ����)
	ray.Price = 12000000;
	cout << "2�� ���� : ";
	ray.PrintPrice();
	// private ���� ���� �Ұ�!
	// ray.year();
	// method�� �̟G�� ����
	cout << "���� ���� : ";
	ray.SetYear(2024);
	ray.PrintYear();
	cout << "getyear : " << ray.GetYear() << '\n';

	// Animal Ŭ���� ��������(����)
	Animal* Dog = new Animal;
	cout << "���� ���� Animal finger : ";
	Dog->PrintFinger();
	delete Dog;

	// �ڽ� Ŭ���� ����
	Atv Moto;
	// ��ӹ��� Bike class�� ����Լ�
	Moto.PrintTire();
	cout << "Moto price : " << Moto.Price << endl;
	// Atv class ���
	Moto.PrintPrice();

	// �Լ� �����ε�
	Arithmatic Expression;
	Expression.Sum(10);
	Expression.Sum(10, 40);
	Expression.Sum(33.3f);

	// �Լ� �������̵�
	Moto.Print();

	// �����ڰ� ��������� ����Ǿ��� ��
	// �ڽ� Ŭ���� ���� : ����� ����
	/*Auto Mobile();
	Mobile().SetYear(2020);
	cout << "Mobile get year : " << Mobile().GetYear();*/

	// Ch08_class ���� �Լ�
	//Car Sonata(80);
	//Sonata.DriveVelocity();
	//Sonata.DriveTime();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
