// https://www.acmicpc.net/problem/19796 2025-06-10 BOJ 19796 Реклама на заборе
#include <iostream>

using namespace std;

bool fence[20000];

int main() {
  int m, n;
  cin >> m >> n;

  while(n-- > 0) {
    int from, to;
    cin >> from >> to;

    for (int i = from; i <= to; i++) {
      fence[i] = true;
    }
  }

  string result = "YES";
  for (int i = 1; i <= m; i++) {
    if (!fence[i]) {
      result = "NO";
      break;
    }
  }

  cout << result;
}