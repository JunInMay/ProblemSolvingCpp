// https://www.acmicpc.net/problem/23813 2024-10-11 BOJ 23813 회전
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long n;
  cin >> n;

  int size = log10l(n) + 1;

  long long result = 0;
  for (int i = 0; i < size; i++) {
    n = n % 10 * pow(10, size - 1) + n / 10;

    result += n;
  }

  cout << result;
}