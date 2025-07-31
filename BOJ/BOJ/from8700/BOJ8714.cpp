// https://www.acmicpc.net/problem/8714 2025-07-31 BOJ 8714 Monety
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, z = 0, o = 0;
  cin >> n;

  for (int i = 0 ; i < n; i ++) {
    int num;
    cin >> num;

    if (num == 0) z++;
    else o++;
  }

  cout << min(z, o);
}