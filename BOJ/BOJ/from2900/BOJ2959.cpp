// https://www.acmicpc.net/problem/2959 2025-07-19 BOJ 2959 거북이
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int r1 = min(a, b) * min (c, d);
  int r2 = min(a, c) * min (b, d);
  int r3 = min(a, d) * min (b, c);

  int result = max(r3, max(r1, r2));
  cout << result;
}