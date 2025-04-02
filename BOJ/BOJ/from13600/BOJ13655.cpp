// https://www.acmicpc.net/problem/13655 2025-04-22 BOJ 13655 Guarda Costeira
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int d, r, p;
  while (cin >> d >> r >> p) {
    string result = "N";

    double rTime = 12.0 / r;
    double pTime = sqrt(12 * 12 + d * d) / p;

    if (p > r && pTime <= rTime) result = "S";
    cout << result << '\n';
  }
}