// https://www.acmicpc.net/problem/13228 2025-10-14 BOJ 13228 The REAL Manhattan distance
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int x1, y1, h1, x2, y2, h2;
    cin >> x1 >> y1 >> h1 >> x2 >> y2 >> h2;

    int result = h1 + h2 + abs(x1 - x2) + abs(y1 - y2);
    cout << result << '\n';
  }
}