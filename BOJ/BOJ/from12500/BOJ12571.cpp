// https://www.acmicpc.net/problem/12571 2025-04-20 BOJ 12571 Rope Intranet (Small)
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  for (int i = 0; i < tc; i++) {
    int n;
    cin >> n;

    int result = 0;
    int from, to;
    int beforeFrom = 0, beforeTo = 0;
    for (int j = 0; j < n; j++) {
      cin >> from >> to;
      if (n != 1) {
        if ((beforeFrom < from && beforeTo > to) || (beforeFrom > from && beforeTo < to)) {
          result = 1;
        }
        beforeFrom = from;
        beforeTo = to;
      }
    }

    cout << "Case #" << i+1 << ": " << result << '\n';
  }
}