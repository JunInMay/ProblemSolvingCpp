// https://www.acmicpc.net/problem/14782 2025-12-20 BOJ 14782 Bedtime Reading, I
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long sum = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;

      if (i != n / i) {
        sum += n / i;
      }
    }
  }

  cout << sum;
}