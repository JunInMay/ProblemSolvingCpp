// https://www.acmicpc.net/problem/31282 2025-08-25 BOJ 31282 ЛОВНО КУЧЕ
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int m, k, n;
  cin >> m >> k >> n;

  cout << ceil((double)m / (n - k));
}