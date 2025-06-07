// https://www.acmicpc.net/problem/21197 2025-06-07 BOJ 21197 Stopwatch
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  int result = 0;
  bool isRunning = false;
  int before = -1;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    if (isRunning) {
      isRunning = false;
      result += t - before;
    } else {
      isRunning = true;
      before = t;
    }
  }

  if (isRunning) {
    cout << "still running";
  } else {
    cout << result;
  }
}