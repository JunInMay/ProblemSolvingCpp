// https://www.acmicpc.net/problem/23901 2025-10-15 BOJ 23901 Bike Tour
#include <iostream>

using namespace std;

int points[1000];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int tc;
  cin >> tc;

  for (int i = 0; i < tc; i++) {
    int n;
    cin >> n;

    fill(points, points + n, 0);

    for (int j = 0; j < n; j++) {
      cin >> points[j];
    }

    int result = 0;
    for (int j = 0; j < n; j++) {
      if (j == 0 || j == n - 1) continue;
      if (points[j - 1] < points[j] && points[j] > points[j + 1]) result++;
    }

    cout << "Case #" << i + 1 << ": " << result << '\n';
  }
}