// https://www.acmicpc.net/problem/22524 2025-05-01 BOJ 22524 koukyoukoukokukikou
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
  char rChars[11] = {
    'Y', 'U', 'I', 'O', 'P', 
    'H', 'J', 'K', 'L', 
    'N', 'M',
  };

  bool isRight[100];
  fill(isRight, isRight+50, false);
  for (int i = 0; i < 11; i++) {
    isRight[rChars[i] - 'A'] = true;
  }

  cin.tie(0);
  ios::sync_with_stdio(0);

  while(true) {
    string input;
    cin >> input;

    if (input.compare("#") == 0) break;

    int before = -1;
    int result = 0;
    for (char& c : input) {
      if (before != -1) {
        if (isRight[c - 'a'] && before == 0) result++;
        else if (!isRight[c - 'a'] && before == 1) result++;
      }

      before = isRight[c - 'a'];
    }

    cout << result << '\n';
  }
}