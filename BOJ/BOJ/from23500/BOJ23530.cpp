// https://www.acmicpc.net/problem/23530 2026-01-13 BOJ 23530 Not A + B
#include <iostream>

using namespace std;

int main() {
  int t, a, b;
  cin >> t;

  while(t-- > 0) {
    cin >> a >> b;

    cout << (a + b) % 50 + 1 << '\n';
  }
}