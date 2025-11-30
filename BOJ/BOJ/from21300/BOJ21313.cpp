// https://www.acmicpc.net/problem/21313 2025-11-30 BOJ 21313 문어
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int c = 0;
  for (int i = 0; i < n; i++) {
    c = c % 2 + 1;
    if (i == n - 1 && n % 2 == 1) c = 3;
    cout << c << ' ';
  }
}