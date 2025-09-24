// https://www.acmicpc.net/problem/30617 2025-09-24 BOJ 30617 Knob
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  int bl = -112234;
  int br = bl;
  int result = 0;
  while(t-- > 0) {
    int l, r;
    cin >> l >> r;

    if (l && r && l == r) result++;
    if (l && bl == l) result++;
    if (r && br == r) result++;

    bl = l;
    br = r;
  }

  cout << result;
}