#include "io.h"

void DefineArray() {
  int Num = 0;

  // 대입 => 접근, access
  int a[3] = {1, 2, 3};
  int b[10] = {1, 2};
  // int c[3] = {1, 2, 3, 4}; => Syntax Error

  int d[3]; // 선언
  d[0] = 1; // 초기화
  d[1] = 2;
  // ...

  for (int i = 0; i < 3; i++) {
    d[i] = i + 1;
  }

  // 출력 => 접근, Access
  for (int i = 0; i < 3; i++) {
    cout << "a[" << i << "] : " << a[i] << '\n';
  }

  // 출력 => 접근, Access
  for (int i = 0; i < 10; i++) {
    cout << "b[" << i << "] : " << b[i] << '\n';
  }
}

void MissingNumber() {
  int Counter = 0;
  cout << "학생 수 입력 : ";
  cin >> Counter;

  int FindNumber;
  cout << "과제 제출하지 않은 학생 수 입력 : ";
  cin >> FindNumber;


  // 전체 학생 번호 데이터 set
  //int TotalMember[Counter];
  int* pTotalMember = new int[Counter];
  for (int i = 0; i < Counter; i++) {
    pTotalMember[i] = i + 1;
  }

  // 과제 제출한 학생 번호 set
  //int WorkMember[Counter - FindNumber];
  int* pWorkMember = new int[Counter - FindNumber];
  for (int i = 0; i < (Counter - FindNumber); i++) {
    cout << "제출 체크 : ";
    cin >> pWorkMember[i];
  }

  // 제출 확인용 배열 변수 set
  //bool Check[Counter];
  bool* pCheck = new bool[Counter];
  for (int i = 0; i < Counter; i++) {
    pCheck[i] = false;
  }

  // 제출한 학생, 미제출 학생 구분 - t/f
  for (int i = 0; i < (Counter - FindNumber); i++) {
    for (int j = 0; j < Counter; j++) {
      if (pWorkMember[i] == pTotalMember[j]) {
        pCheck[j] = true;
      }
    }
  }

  // 미제출 학생 번호 추출
  for (int i = 0; i < Counter; i++) {
    if (pCheck[i] == false) {
      cout << i + 1 << "번 안냄" << endl;
    }
  }
}

void BubbleSort() {
  int Number[10] = {5, 6, 4, 1, 9, 2, 8, 7, 3, 10};

  for (int i = 9; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (Number[j] > Number[j + 1]) {
        int temp = Number[j];
        Number[j] = Number[j + 1];
        Number[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << Number[i] << ", ";
  }

  cout << '\n';
}

void TwoDimension() {
  int number[3][2] = {{1, 2}, {3, 4}, {5, 6}};

  cout << number[0][0];
}