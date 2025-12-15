// https://www.acmicpc.net/problem/8661 2025-12-15 BOJ 8661 Stopki
#include <iostream>

using namespace std;

int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  int result = 0;
  if (n % (a + b) < a) result = 1;

  cout << result;
}