// https://www.acmicpc.net/problem/24805 2025-05-05 BOJ 24805 Climbing Worm
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, h;
  cin >> a >> b >> h;

  int result = 1;
  h = max(0, (int)(h - a));

  result += ceil(h / (a - b));

  cout << result;
}