// https://www.acmicpc.net/problem/32941 2025-04-04 BOJ 32941 왜 맘대로 예약하냐고
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int t, x, n;
  cin >> t >> x >> n;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int tt;
    cin >> tt;

    for (int j = 0; j < tt; j++) {
      int time;
      cin >> time;

      if (time == x) {
        cnt++;
      }
    }
  }

  string result = "NO";
  if (cnt == n) result = "YES";

  cout << result;
}