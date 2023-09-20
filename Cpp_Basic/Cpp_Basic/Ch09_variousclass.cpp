#include "io.h"
#include <array>
#include <string>
#include <vector>

using namespace std;

void VariousClass() {
	// array class
	array<int, 3> Number = { 11, 22, 33 };
	
	cout << "Array size : " << Number.size() << endl;
	cout << "Array front : " << Number.front() << endl;
	cout << "Array back : " << Number.back() << endl;
	cout << "Array empty : " << Number.empty() << endl;
	cout << "Array at : " << Number.at(1) << endl;
	cout << endl;

	// string class
	string Text1 = "Hello World";
	string Text2 = "Hello SeSAC";

	cout << "string < : " << (Text1 < Text2) << endl; // 알파벳 순서 비교
	cout << "string > : " << (Text1 > Text2) << endl;
	cout << "string == : " << (Text1 == Text2) << endl;
	cout << "string + : " << (Text1 + Text2) << endl; // 연결 연산
	//cout << "string append() : " << Text1.append(Text2) << endl;
	cout << "string substring() : " << Text1.substr(3) << endl;
	cout << "string find() : " << Text1.find("World") << endl;
	cout << endl;

	// vector class
	// 동적 생성
	vector<int> v1; // 빈 vector
	vector<int> v2(3); // 0으로 초기화 된 3개 원소
	vector<int> v3(3, 2); // 2로 초기화 된 3개 원소

	v1.push_back(11);
	cout << "v1 front : " << v1.front() << endl;
	v1.push_back(22);
	cout << "v1 at(1) : " << v1.at(1) << endl;
	cout << endl;
}