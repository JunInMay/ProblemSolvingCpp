// https://www.acmicpc.net/problem/26548 2025-10-16 BOJ 26548 Quadratics
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int tc;
  cin >> tc;

  cout << fixed << setprecision(3);
  while(tc-- > 0) {
    double a, b, c;
    cin >> a >> b >> c;

    double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << r1 << ", " << r2 << '\n';
  }
}