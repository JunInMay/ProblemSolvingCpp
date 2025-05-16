// https://www.acmicpc.net/problem/24089 2025-05-16 BOJ 24089 ボールの移動 (Moving Balls)
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int balls[4000];
  for (int i = 1; i <= n; i++) balls[i] = i;

  for (int i = 0; i < m; i++) {
    int ball, to;
    cin >> ball >> to;

    balls[ball] = to;
  }

  for (int i = 1; i <= n; i++) {
    cout << balls[i] << '\n';
  }
}