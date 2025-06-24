// https://www.acmicpc.net/problem/13617 2025-06-23 BOJ 13617 Handebol
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  int result = 0;
  for (int i = 0; i < n; i++) {
    bool consecutive = true;
    for (int j = 0; j < m; j++) {
      int g;
      cin >> g;

      if (!g) {
        consecutive = false;
      }
    }

    if (consecutive) result++;
  }

  cout << result;
}