// https://www.acmicpc.net/problem/29029 2024-12-30 BOJ 29029 Фигурки
#include <iostream>

using namespace std;

char d[4] = {'N', 'S', 'E', 'W'};
int maxes[4];

int main() {
  int n;
  string s;
  cin >> n >> s;

  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    int idx = -1;
    for (int j = 0; j < 4; j++) {
      if (d[j] == c) idx = j;
    }

    maxes[idx]++;
  }

  int maxIdx = -1;
  int maxNumber = -1;
  for (int i = 0; i < 4; i++) {
    if (maxNumber < maxes[i]) {
      maxNumber = maxes[i];
      maxIdx = i;
    }
  }

  int result = 0;
  for (int i = 0; i < 4; i++) {
    if (i != maxIdx) result += maxes[i];
  }

  cout << result;
}