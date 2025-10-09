// https://www.acmicpc.net/problem/25175 2025-10-09 BOJ 25175 두~~부 두부 두부
#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  k -= 3;
  k %= n;

  int result = (m - 1 + k + n) % n + 1;
  cout << result;
}
/*
1 1 -100000
*/