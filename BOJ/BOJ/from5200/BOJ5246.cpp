// https://www.acmicpc.net/problem/5246 2025-12-22 BOJ 5246 Checkerboard Rows
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  int yCounts[10];
  cin >> tc;

  while (tc-- > 0) {
    int p;
    cin >> p;

    fill(yCounts, yCounts+9, 0);

    for (int i = 0; i < p; i++) {
      int x, y;
      cin >> x >> y;
      yCounts[y]++;
    }

    int result = -1;
    for (int i = 1; i < 9; i++) {
      result = max(result, yCounts[i]);
    }

    cout << result << '\n';
  }
}