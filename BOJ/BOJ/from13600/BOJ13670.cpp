// https://www.acmicpc.net/problem/13670 2025-07-29 BOJ 13670 Alarme Despertador
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  while(true) {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;

    int result = t2 - t1;
    result += t2 - t1 < 0 ? 60 * 24 : 0;
    cout << result << '\n';
  }
}