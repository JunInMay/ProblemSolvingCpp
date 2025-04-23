// https://www.acmicpc.net/problem/30596 2025-04-23 BOJ 30596 Axis-Aligned Area
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;

  cout << min(a3, a4) * min(a1, a2);
}