// https://www.acmicpc.net/problem/30821 2025-03-30 BOJ 30821 별자리가 될 수 있다면
#include <iostream>

using namespace std;

long long fact(long long n) {
  if (n == 1) return 1;
  return n * fact(n-1);
}

int main() {
  int n;
  cin >> n;

  long long numerator = 1;
  for (int i = n; i > n - 5; i--) {
    numerator *= i;
  }

  cout << numerator / fact(5);
}