// https://www.acmicpc.net/problem/29412 2026-01-05 BOJ 29412 Огни светофора
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int g, gb, y, r, ry, t;
  cin >> g >> gb >> y >> r >> ry >> t;

  int sum = g + gb + y + r + ry;
  int cycle = t / sum;
  int left = t % sum;

  int green = 0, red = 0, yellow = 0;
  green = g + gb / 2;
  yellow = y + ry;
  red = r + ry;
  green *= cycle;
  yellow *= cycle;
  red *= cycle;

  green += max(0, min(left, g));
  left -= g;
  green += max(0, min(left, gb) / 2);
  left -= gb;
  yellow += max(0, min(left, y));
  left -= y;
  red += max(0, min(left, r));
  left -= r;
  red += max(0, min(left, ry));
  yellow += max(0, min(left, ry));

  cout << red << " " << yellow << " " << green;
}