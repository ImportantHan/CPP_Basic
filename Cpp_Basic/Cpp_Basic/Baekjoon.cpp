#include "io.h"
#include <string>

int Baekjoon() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = N - i; j >= 1; j--) {
            cout << " ";
        }

        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "*";
        }

        for (int j = N - i; j >= 1; j--) {
            cout << " ";
        }

        cout << '\n';
    }

    for (int i = N - 1; i >= 1; i--) {

        for (int j = N - 1; j >= i; j--) {
            cout << " ";
        }

        for (int j = i * 2 - 1; j >= 1; j--) {
            cout << "*";
        }

        for (int j = N - 1; j >= i; j--) {
            cout << " ";
        }

        cout << '\n';
    }


    return 0;
}


// 2차원 배열 - 색종이 (2563번)
int Backjoon2563() {
    int arr[100][100] = { 0 };

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        int y;
        cin >> y;

        for (int j = x - 1; j < x + 9; j++) {
            for (int k = y - 1; k < y + 9; k++) {
                arr[j][k] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] > 0) {
                area++;
            }
        }
    }
    cout << area;

    return 0;
}

// 조건문 - 알람시계 (2884번)
int Backjoon2884() {
    int H, M;
    cin >> H >> M;

    if (M - 45 < 0) {
        if (H - 1 < 0) {
            cout << H + 24 - 1 << M + 60 - 45;
        }
        else {
            cout << H - 1 << M + 60 - 45;
        }
    }
    else {
        cout << H << M - 45;
    }

    return 0;
}

// 문자열 - 숫자의 합 (11720번)
// => 아스키코드 '0' = 53
int Backjoon11720() {
    int N;
    cin >> N;

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += s[i] - '0';
    }

    cout << sum;

    return 0;
}

// 문자열 - 단어의 개수 (1152번)
// => cin은 공백을 포함하지 못함
// => string 헤더파일 include 후 getline(cin, s)함수 사용
//#include <string>
int Backjoon1152() {
    string str;
    getline(cin, str);

    int num = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            num++;
        }
    }
    if (str[0] == ' ') {
        num--;
    }
    if (str[str.length() - 1] == ' ') {
        num--;
    }

    cout << num;

    return 0;
}