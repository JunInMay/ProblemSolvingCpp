// https://www.acmicpc.net/problem/11795 2025-07-23 BOJ 11795 Donation Packaging
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  int ta = 0, tb = 0, tc = 0;
  while(n-- > 0) {
    int a, b, c;
    cin >> a >> b >> c;

    ta += a;
    tb += b;
    tc += c;

    int m = min(ta, min(tb, tc));
    if (m < 30) {
      cout << "NO\n";
    } else {
      ta -= m;
      tb -= m;
      tc -= m;
      cout << m << '\n';
    }
  }
}