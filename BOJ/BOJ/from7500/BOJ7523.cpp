// https://www.acmicpc.net/problem/7523 2025-01-04 BOJ 7523 Gauß
#include <iostream>

using namespace std;

long long getSum(long long from, long long to) {
  long long cnt = (to - from + 1);
  return (from + to) * cnt / 2;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long l, r;
    cin >> l >> r;

    if (l == 0) l = 1;
    if (r == 0) r = -1;

    if (l < 0 && r > 0) {
      if (abs(l) > abs(r)) {
        r = -(r + 1);
      } else if (abs(l) < abs(r)){
        l = -l + 1;
      } else {
        l = 0;
        r = 0;
      }
    }

    long long result = getSum(l, r);

    cout << "Scenario #" << i+1 << ":\n";
    cout << result << '\n';
    if (i != n-1) cout << '\n';
  }
}