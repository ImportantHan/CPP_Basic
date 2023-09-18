// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 입출력 헤더 파일
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

	// vehicle 클래스 정적선언(생성) - 선언된 인스턴스
	Vehicle ray(2023, 10000000);
	cout << "1차 가격 : ";
	ray.PrintPrice();
	// public 변수 변경(외부수정 가능)
	ray.Price = 12000000;
	cout << "2차 가격 : ";
	ray.PrintPrice();
	// private 변수 변경 불가!
	// ray.year();
	// method를 이욯애 변경
	cout << "연식 변경 : ";
	ray.SetYear(2024);
	ray.PrintYear();
	cout << "getyear : " << ray.GetYear() << '\n';

	// Animal 클래스 동적선언(생성)
	Animal* Dog = new Animal;
	cout << "동적 선언 Animal finger : ";
	Dog->PrintFinger();
	delete Dog;

	// 자식 클래스 생성
	Atv Moto;
	// 상속받은 Bike class의 멤버함수
	Moto.PrintTire();
	cout << "Moto price : " << Moto.Price << endl;
	// Atv class 멤버
	Moto.PrintPrice();

	// 함수 오버로딩
	Arithmatic Expression;
	Expression.Sum(10);
	Expression.Sum(10, 40);
	Expression.Sum(33.3f);

	// 함수 오버라이딩
	Moto.Print();

	// 생성자가 명시적으로 선언되었을 때
	// 자식 클래스 선언 : 명시적 선언
	/*Auto Mobile();
	Mobile().SetYear(2020);
	cout << "Mobile get year : " << Mobile().GetYear();*/

	// Ch08_class 실행 함수
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
