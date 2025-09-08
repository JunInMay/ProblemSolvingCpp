// https://www.acmicpc.net/problem/13129 2025-09-08 BOJ 13129 Disposable Cup
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int a, b, n;
  cin >> a >> b >> n;

  for (int i = 0; i < n; i ++) {
    cout << a * n + b * (i + 1) << " ";
  }
}