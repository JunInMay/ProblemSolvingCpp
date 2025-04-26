// https://www.acmicpc.net/problem/25024 2025-04-26 BOJ 25024 시간과 날짜
#include <iostream>

using namespace std;

bool range(int target, int from, int to) {
  return from <= target && target <= to;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc;
  cin >> tc;

  int lastDays[20] = {
    31, 29, 31, 30, 31,
    30, 31, 31, 30, 31,
    30, 31
  };

  while(tc-- > 0) {
    int x, y;
    cin >> x >> y;
    string result1 = "No", result2 = "No";

    if (range(x, 0, 23) && range(y, 0, 59)) result1 = "Yes";
    if (range(x, 1, 12) && range(y, 1, lastDays[x - 1])) result2 = "Yes";

    cout << result1 << ' ' << result2 << '\n';
  }
}

/*
5
99 99
24 59
23 59
12 31
10 29

*/