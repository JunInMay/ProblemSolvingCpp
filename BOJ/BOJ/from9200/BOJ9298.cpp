// https://www.acmicpc.net/problem/9298 2025-07-13 BOJ 9298 Ant Entrapment
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc;
  cin >> tc;

  cout << fixed << setprecision(10);

  for (int tci = 1; tci <= tc; tci++) {
    int l;
    cin >> l;

    double minX = 1100, maxX = -1100, minY = 1100, maxY = -1100;

    for (int i = 0; i < l; i++) {
      double x, y;
      cin >> x >> y;

      minX = min(minX, x);
      minY = min(minY, y);
      maxX = max(maxX, x);
      maxY = max(maxY, y);
    }

    double width = maxX - minX;
    double height = maxY - minY;

    double area = width * height;
    double perimeter = width * 2 + height * 2;

    cout << "Case " << tci << ": " << "Area " << area << ", Perimeter " << perimeter << '\n';
  }
}