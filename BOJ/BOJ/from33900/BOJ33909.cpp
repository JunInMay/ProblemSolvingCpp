// https://www.acmicpc.net/problem/33909 2025-06-15 BOJ 33909 알파벳 블록
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int s, c, o, n;
  cin >> s >> c >> o >> n;

  int x = s + n;
  int y = c + 2 * o;

  int result = min(y / 6, x / 3);
  cout << result;
}