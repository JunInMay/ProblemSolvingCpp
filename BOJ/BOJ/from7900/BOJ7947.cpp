// https://www.acmicpc.net/problem/7947 2025-07-12 BOJ 7947 Koncert
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  while(n-- > 0) {
    double r = 0, g = 0, b = 0;
    for (int i = 0; i < 10; i++) {
      int rr, gg, bb;
      cin >> rr >> gg >> bb;

      r += rr;
      g += gg;
      b += bb;
    }

    cout << round(r / 10) << " " << round(g / 10) << " " << round(b / 10) << '\n';
  }
}