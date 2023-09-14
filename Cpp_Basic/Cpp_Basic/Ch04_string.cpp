#include "io.h"

void String() {
  char a = 'a';

  char Hello[5] = {'H', 'E', 'L', 'L', 'O'};

  char World[6] = "WORLD"; // '\0문자가 마지막에 포함됨'

  char b[] = "Hello World";

  int Size = sizeof(b);

  cout << Size << endl;

  for (int i = 0; i < (Size - 1); i++) {
    cout << b[i] << endl;
  }
}

void Alphabet() {
    string S;
    cin >> S;
    
    int alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }
    
    for (int i = 0; i < S.size(); i++) {
        int temp = S[i] - 97;
        if (alphabet[temp] == -1) {
            alphabet[temp] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }
}