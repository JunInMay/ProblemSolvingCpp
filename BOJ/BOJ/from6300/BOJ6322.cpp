// https://www.acmicpc.net/problem/6322 2025-06-18 BOJ 6322 직각 삼각형의 두 변
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  cout << fixed << setprecision(3);
  int idx = 1;
  while(1) {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) break;

    char target = ' ';
    double result;
    if (a == -1) {
      target = 'a';
      result = sqrt(c * c - b * b);
    } else if (b == -1) {
      target = 'b';
      result = sqrt(c * c - a * a);
    } else if (c == -1) {
      target = 'c';
      result = sqrt(a * a + b * b);
    }

    cout << "Triangle #" << idx++ <<'\n';

    if (result <= 0 || isnan(result)) {
      cout << "Impossible." << '\n';
    } else {
      cout << target << " = " << result << '\n';
    }
    cout << '\n';
  }
}