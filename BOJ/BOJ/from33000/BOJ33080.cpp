// https://www.acmicpc.net/problem/33080 2025-09-23 BOJ 33080 Party Medley
#include <iostream>
#include <cmath>

using namespace std;

int arr[12345];

int main() {
  ios::sync_with_stdio();
  cin.tie(0);
  
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = 0;
  int maxValue = -1;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int ii = arr[i];
        int jj = arr[j];
        int kk = arr[k];

        if (abs(ii - jj) <= m && abs(ii - kk) <= m && abs(jj - kk) <= m) {
          count++;
          maxValue = max(maxValue, ii + jj + kk);
        }
      }
    }
  }

  if (count == 0) cout << maxValue;
  else cout << count << ' ' << maxValue;
}