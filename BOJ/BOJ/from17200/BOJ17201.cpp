// https://www.acmicpc.net/problem/17201 2025-06-24 BOJ 17201 자석 체인
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int before = -1;
  string result = "Yes";
  for (int i = 0; i < n * 2; i++) {
    int now = s[i] - '0';
    if (before != -1 && now == before) {
      result = "No";
    }
    before = now;
  }

  cout << result;
}