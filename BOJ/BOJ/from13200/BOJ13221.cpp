// https://www.acmicpc.net/problem/13221 2025-04-17 BOJ 13221 Manhattan
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int x, y, n;
  cin >> x >> y >> n;

  int resX = -1, resY = -1;
  int resDistance = 2000;

  for (int i = 0; i < n; i++) {
    int taxiX, taxiY;
    cin >> taxiX >> taxiY;

    int distance = abs(taxiX - x) + abs(taxiY - y);
    if (distance <= resDistance) {
      resX = taxiX;
      resY = taxiY;
      resDistance = distance;
    }
  }

  cout << resX << " " << resY << '\n';
}