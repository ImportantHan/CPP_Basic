#include "io.h"
#include <string>

int Baekjoon() {
    int N, B;
    cin >> N >> B;

    string result;
    while (N/B != 0) {
        if (N % B > 9) {
            result = char(N % B - 10 + 'A') + result;
            cout << result << ", ";
        }
        else {
            result = to_string(N % B) + result;
            cout << result << ", ";
        }

        N /= B;
    }

    cout << result;

    return 0;
}


// 조건문 - 알람시계
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

// 문자열 - 숫자의 합
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

// 문자열 - 단어의 개수
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

// 심화1 - 단어 공부
int Backjoon1157() {
    string s;
    cin >> s;

    int arr[26] = { 0 };
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] < 97) {
            arr[s[i] - 65]++;
        }
        else {
            arr[s[i] - 97]++;
        }
    }

    int max = 0;
    int alpha = 0;

    bool check = 0;

    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            alpha = i;
            check = 1;
        }
        else if (arr[i] == max) {
            check = 0;
        }
    }

    if (check == 1) {
        cout << char(alpha + 65);
    }
    else {
        cout << "?";
    }

    return 0;
}

// 2차원 배열 - 색종이
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