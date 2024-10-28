// https://www.acmicpc.net/problem/11880 2024-10-28 BOJ 11880 개미
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc;
  cin >> tc;

  while (tc-- > 0) {
    int a, b, c;
    cin >> a >> b >> c;

    long long candidates[3] = {
      pow(a + b, 2) + pow(c, 2),
      pow(b + c, 2) + pow(a, 2),
      pow(c + a, 2) + pow(b, 2),
    };

    long long result = pow(10, 11);
    for (int i = 0; i < 3; i++) {
      if (candidates[i] < result) result = candidates[i];
    }

    cout << result << '\n';
  }
}
