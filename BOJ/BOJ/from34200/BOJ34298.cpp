// https://www.acmicpc.net/problem/34298 2025-10-05 BOJ 34298 Closing Early
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int r, s, n;
  cin >> r >> s >> n;

  int result = 0;
  for (int i = 0; i < n; i++) {
    int nn;
    cin >> nn;

    if (r == 0) break;

    r -= nn;
    if (r < 0) r += (int)ceil(abs(r) / (double)s) * s;

    result = i + 1;
  }

  if (r != 0) result = -1;
  cout << result;
}