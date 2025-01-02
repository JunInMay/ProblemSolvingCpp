// https://www.acmicpc.net/problem/9622 2025-01-02 BOJ 9622 Cabin Baggage
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    double l, w, d, ww;
    cin >> l >> w >> d >> ww;

    bool allowed = true;
    if (ww > 7) allowed = false;

    if (l + w + d > 125 && (l > 56 || w > 45 || d > 25)) allowed = false;

    int result = 0;
    if (allowed) {
      result = 1;
      cnt++;
    }

    cout << result << '\n';
  }

  cout << cnt << '\n';
}