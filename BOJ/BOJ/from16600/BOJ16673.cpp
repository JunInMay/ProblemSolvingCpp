// https://www.acmicpc.net/problem/16673 2025-07-09 BOJ 16673 고려대학교에는 공식 와인이 있다
#include <iostream>

using namespace std;

int main() {
  int c, k, p;
  cin >> c >> k >> p;

  int result = 0;
  for (int i = 0; i < c; i++) {
    result += (i + 1) * k + (i + 1) * (i + 1) * p;
  }

  cout << result;
}