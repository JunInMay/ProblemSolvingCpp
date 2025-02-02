// https://www.acmicpc.net/problem/22150 2025-02-02 BOJ 22150 Шоколадка
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int n;
    cin >> n;

    string result = "no";
    for (int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;

      if (l + r != n) result = "yes";
    }

    cout << result << '\n';
  }
}