// https://www.acmicpc.net/problem/34367 2025-11-27 BOJ 34367 Cookie Monster Concussion
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long n;
  cin >> n;

  while (n >= 10) {
    long long d = n;
    int sum = 0;
    for (int i = 0; i < log10(n) + 1; i++) {
      sum += d % 10;
      d /= 10;
    }
    n = sum;
  }
  if (n % 9 == 0) cout << 9 << '\n';
  else cout << n % 9 << '\n';
}
/*
1000000000000000000
*/