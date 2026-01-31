// https://www.acmicpc.net/problem/11050 2026-01-31 BOJ 11050 이항 계수 1
#include <iostream>

using namespace std;

int factorial(int n, int depth) {
  if (depth == 0) {
    return 1;
  }
  if (n == 1) return n;

  return factorial(n - 1, depth - 1) * n;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << factorial(n, k) / factorial(k, k);
}