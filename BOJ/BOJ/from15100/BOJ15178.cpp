// https://www.acmicpc.net/problem/15178 2025-09-15 BOJ 15178 Angles
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  while(n-- > 0) {
    int a, b, c;
    cin >> a >> b >> c;

    string result = "Seems OK";
    if (a + b + c != 180) result = "Check";

    cout << a << ' ' << b << ' ' << c << ' ' << result << '\n';
  }
}