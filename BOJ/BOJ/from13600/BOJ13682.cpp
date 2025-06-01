// https://www.acmicpc.net/problem/13682 2025-06-01 BOJ 13682 Loop Musical
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  while (true) {
    cin >> n;
    vector<int> v(n);
    if (n == 0) break;

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
      int& before = v[(i + n - 1) % n];
      int& after = v[(i + n + 1) % n];
      int& now = v[i];
      if ((before < now && now > after) || (before > now && now < after)) result++;
    }

    cout << result << '\n';
  }
}