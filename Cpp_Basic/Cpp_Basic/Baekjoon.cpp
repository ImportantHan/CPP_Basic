#include "io.h"

int Baekjoon() {
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