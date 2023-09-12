#include "io.h"

// switch case 문
void SelectSubject() {
  int SubjectNumber = 0;
  cout << "과목 번호를 입력해주세요 : ";
  cin >> SubjectNumber;

  switch (SubjectNumber) {
  case 1:
    cout << "C++" << endl;
    break;
  case 2:
    cout << "언리얼 엔진" << endl;
    break;
  case 3:
    cout << "VR" << endl;
    break;
  default:
    cout << "과목 번호를 확인해주세요" << endl;
  }
}

// 구구단
void TimesTable() {
  for (int i = 2; i <= 9; i++) {
    cout << i << "단\t";
    for (int j = 1; j <= 9; j++) {
      cout << i * j << '\t';
    }
    cout << endl;
  }
}

// 로그인
void Login() {
  int IdNumber = 123456;
  int InputId = 0;

  cout << "<로그인>" << endl;

  while (true) {
    cout << "ID : ";
    cin >> InputId;

    if (InputId == IdNumber) {
      cout << "로그인 성공" << endl;
      break;
    } else {
      cout << "다시 입력하세요." << endl;
    }
  }
}


// 현재 시간, 경과 시간 입력 후 결과값 받기
int TimePassed() {
  int hour = 0;
  int minute = 0;
  int need = 0;

  cout << "시 : ";
  cin >> hour;
  cout << "분 : ";
  cin >> minute;
  cout << "경과시간 : ";
  cin >> need;

  int total = hour * 60 + minute + need;

  cout << total / 60 << " " << total % 60;

  return 1 ;

}