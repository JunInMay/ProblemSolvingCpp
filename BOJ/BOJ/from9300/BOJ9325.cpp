// https://www.acmicpc.net/problem/9325 2024-10-31 BOJ 9325 얼마?
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int s, n;
    cin >> s >> n;

    int result = s;
    for (int i = 0; i < n; i++) {
      int q, p;
      cin >> q >> p;

      result += q * p;
    }

    cout << result << '\n';
  }
}