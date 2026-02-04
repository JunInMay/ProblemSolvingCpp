// https://www.acmicpc.net/problem/7782 2026-02-04 BOJ 7782 Alien
#include <iostream>

using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  string result = "No";
  while(n-- > 0) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 <= x && y1 <= y && x <= x2 && y <= y2) result = "Yes";
  }

  cout << result;
}