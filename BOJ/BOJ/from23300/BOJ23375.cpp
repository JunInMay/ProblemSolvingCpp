// https://www.acmicpc.net/problem/23375 2024-09-23 BOJ 23375 Arm Coordination
#include <iostream>

using namespace std;

void print(int x, int y) {
  cout << x << ' ' << y << '\n';
}

int main() {
  int x, y, r;
  cin >> x >> y >> r;

  print(x + r, y + r);
  print(x + r, y - r);
  print(x - r, y - r);
  print(x - r, y + r);
}