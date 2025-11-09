// https://www.acmicpc.net/problem/31615 2025-11-09 BOJ 31615 桁 (Digit)
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  cout << (int)log10(a + b) + 1;
}