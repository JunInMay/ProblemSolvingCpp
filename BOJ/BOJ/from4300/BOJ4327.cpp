// https://www.acmicpc.net/problem/4327 2025-12-18 BOJ 4327 Combination Lock
#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;

  while(true) {
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0 && c == 0 && d == 0) break;

    int result = 360 * 3;
    int deg = 360 / 40;
    int first, second, third;

    if (a - b < 0) {
      first = a + (40 - b);
    } else {
      first = a - b;
    }

    if (b - c < 0) {
      second = c - b;
    } else {
      second = 40 - b + c;
    }

    if (c - d < 0) {
      third = c + (40 - d);
    } else {
      third = c - d;
    }
    result += (first + second + third) * deg;

    cout << result << '\n';
  }
}