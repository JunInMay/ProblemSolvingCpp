// https://www.acmicpc.net/problem/29823 BOJ 29823 Pakirobot Manhattanis 2024-07-23
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  string s;
  cin >> n >> s;

  int vertical = 0, horizontal = 0;
  for (char c : s) {
    switch(c) {
      case 'N':
        vertical++;
        break;
      case 'S':
        vertical--;
        break;
      case 'E':
        horizontal++;
        break;
      case 'W':
        horizontal--;
        break;
    }
  }

  cout << abs(vertical) + abs(horizontal);
}