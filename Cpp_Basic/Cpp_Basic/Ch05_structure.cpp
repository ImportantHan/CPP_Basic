#include "io.h"

//void Structure() {
//
//  // 구조체 서술 정의 : 하나의 데이터 타입 생성
//  struct inflatable {
//    char name[20];
//    float volume;
//    double price;
//  };
//  // 구조체 변수 생성
//  inflatable People = {"Tom", 0.75, 15.235};
//
//  // ex.
//  struct sesac {
//    char name[20];
//    char address[100];
//    char phone[20];
//    int age;
//  };
//
//  sesac Banjang;
//  Banjang = { "Jane", "서울시", "01012345678", 30 };
//  Banjang.age = 28;
//}

void Enum() {
  // enum : 열거형 데이터 타입
  // Sun, Mon, Tue ... Sat : 열거형 상수(enum 상수)
  // 0부터 시작하는 양수를 열거형 상수의 값으로 할당
  enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

  day DayName;
  DayName = Fri;
  // cout << DayName << endl;

  // C++에서 지정된 상수
  cout << CLOCKS_PER_SEC << endl;
}

int ChangeValue() {
  return 0;
}

void CallByValue() {
  int c = 10;
  c = ChangeValue();
  cout << c;
}