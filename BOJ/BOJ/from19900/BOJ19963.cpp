// https://www.acmicpc.net/problem/19963 2025-03-09 BOJ 19963 Санта Клаус
#include <iostream>

using namespace std;

bool gifts[10000];

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0; i < b+c; i++) {
    int n;
    cin >> n;

    gifts[n] = true;
  }

  cout << a - b - c << '\n';
  for (int i = 1; i <= a; i++) {
    if (!gifts[i]) cout << i << " ";
  }
}