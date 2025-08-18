// https://www.acmicpc.net/problem/9317 2025-08-18 BOJ 9317 Monitor DPI
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  cout << fixed << setprecision(2);

  while (true) {
    double d, rh, rv;
    cin >> d >> rh >> rv;

    if (d == 0 && rh == 0 && rv == 0) break;

    double w = 16 * d / sqrt(337);
    double h = w * 9 / 16;

    cout << "Horizontal DPI: " << rh / w << '\n';
    cout << "Vertical DPI: " << rv / h << '\n';
  }
}