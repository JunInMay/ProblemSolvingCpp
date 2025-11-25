// https://www.acmicpc.net/problem/15858 2025-11-25 BOJ 15858 Simple Arithmetic
/*
정수부와 소수부를 나눠서 계산한 것임.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;

  long long ab = a * b;
  if (ab >= 10 * c) {
    cout << ab / (c * 10);
    ab %= (c * 10);
  }

  cout << fixed << setprecision(15) << (long double)ab / c;
}