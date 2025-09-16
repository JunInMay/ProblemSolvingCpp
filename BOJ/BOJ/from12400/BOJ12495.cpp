// https://www.acmicpc.net/problem/12495 2025-09-16 BOJ 12495 Perfect Harmony (Small)
#include <iostream>

using namespace std;

int inputs[10100];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n, l, h;
    cin >> n >> l >> h;

    for (int j = 0; j < n; j++) {
      cin >> inputs[j];
    }

    string result = "NO";
    for (int j = l; j <= h; j++) {
      bool flag = true;
      for (int k = 0; k < n; k++) {
        if (j % inputs[k] != 0 && inputs[k] % j != 0) {
          flag = false;
        }
      }

      if (flag) {
        result = to_string(j);
        break;
      }
    }

    cout << "Case #" << i << ": " << result << '\n';
  }
}