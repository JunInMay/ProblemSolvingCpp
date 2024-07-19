// https://www.acmicpc.net/problem/22341 BOJ 22341 사각형 면적 2024-07-19
#include <iostream>

using namespace std;

int main() {
  int n, c;
  cin >> n >> c;

  int curY = n, curX = n;

  while (c-- > 0) {
    int y, x;
    cin >> y >> x;

    if (y > curY || x > curX) continue;

    int ySize = y * curX;
    int xSize = x * curY;

    if (ySize >= xSize) {
      curY = y;
    } else {
      curX = x;
    }
  }

  cout << curY * curX;
}