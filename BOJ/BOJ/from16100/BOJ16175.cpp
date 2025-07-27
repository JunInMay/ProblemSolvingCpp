// https://www.acmicpc.net/problem/16175 2025-07-27 BOJ 16175 General Election
#include <iostream>

using namespace std;

int sums[10000];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc, n, m;
  cin >> tc;

  while(tc-- > 0) {
    fill(sums, sums + 2000, 0);
    cin >> n >> m;

    int maxIdx = -1, maxValue = -1;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        int num;
        cin >> num;

        sums[j] += num;
      }
    }

    for (int i = 0; i < n; i++) {
      if (sums[i] > maxValue) {
        maxValue = sums[i];
        maxIdx = i + 1;
      }
    }

    cout << maxIdx << '\n';
  }
}