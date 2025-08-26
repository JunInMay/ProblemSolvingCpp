// https://www.acmicpc.net/problem/28960 2025-08-26 BOJ 28960 Плащ левитации
#include <iostream>

using namespace std;

int main() {
  int h, l, a, b;
  cin >> h >> l >> a >> b;

  string result = "NO";
  if ((l >= a && b <= h * 2) || (l >= b && a <= h * 2)) result = "YES";
  cout << result;
}