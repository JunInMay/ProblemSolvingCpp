// https://www.acmicpc.net/problem/13484 2025-07-10 BOJ 13484 Tarifa
#include <iostream>

using namespace std;

int main() {
  int x, n;
  cin >> x >> n;

  int result = (n + 1) * x;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    result -= num;
  }

  cout << result;
}