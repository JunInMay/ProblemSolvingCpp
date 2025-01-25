// https://www.acmicpc.net/problem/27475 2025-01-25 BOJ 27475 Cancel the Trains
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;

  bool started[101];

  while (tc-- > 0) {
    int bot, left;
    cin >> bot >> left;

    fill(started, started+101, false);

    for (int i = 0; i < bot; i++) {
      int train;
      cin >> train;

      started[train] = true;
    }

    int result = 0;
    for (int i = 0; i < left; i++) {
      int train;
      cin >> train;

      if (started[train]) result++;
    }

    cout << result << '\n';
  }
}