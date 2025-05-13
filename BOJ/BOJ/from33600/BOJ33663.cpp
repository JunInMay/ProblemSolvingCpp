// https://www.acmicpc.net/problem/33663 2025-05-13 BOJ 33663 루미의 진정한™ 보라색 찾기
#include <iostream>
#include <cmath>

using namespace std;

bool isIn(double t, double from, double to) {
  return from <= t && t <= to;
}

int main() {
  double f1, t1, f2, t2, f3, t3;
  double r, g, b;
  cin >> f1 >> t1 >> f2 >> t2 >> f3 >> t3 >> r >> g >> b;

  double ma = max(r, max(g, b));
  double mi = min(r, min(g, b));
  double v = ma;
  double s = 255 * (v - mi) / v;
  double h = 240 + (60 * (r - g)) / (v - mi);

  if (r == ma) {
    h = 60 * (g - b) / (v - mi);
  } else if (g == ma) {
    h = 120 + (60 * (b - r)) / (v - mi);
  }

  if (h < 0) h += 360;

  string result = "Lumi will not like it.";
  if (isIn(h, f1, t1) && isIn(s, f2, t2) && isIn(v, f3, t3)) result = "Lumi will like it.";

  cout << result;
}