// https://www.acmicpc.net/problem/26432 2024-12-24 BOJ 26432 Walktober
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int tc;
  cin >> tc;

  for (int c = 1; c <= tc; c++) {
    int m, n, p;
    cin >> m >> n >> p;

    int result = 0;

    vector<int> john;
    vector<int> maxes(n);

    fill(maxes.begin(), maxes.end(), -1);

    for (int i = 1; i <= m; i++) {
      for (int j = 0; j < n; j++) {
        int step;
        cin >> step;

        if (i == p) {
          john.push_back(step);
        }

        maxes[j] = max(maxes[j], step);
      }
    }

    for (int i = 0; i < n; i++) {
      if (john[i] < maxes[i]) {
        result += maxes[i] - john[i];
      }
    }

    cout << "Case #" << c << ": " << result << '\n';
  }
}