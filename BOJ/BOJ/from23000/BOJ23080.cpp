// https://www.acmicpc.net/problem/23080 2025-09-28 BOJ 23080 스키테일 암호
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int idx = 0;
  for (char& c : s) {
    if (idx++ % n == 0) cout << c;
  }
}