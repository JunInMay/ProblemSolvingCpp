// https://www.acmicpc.net/problem/12790 2025-08-11 BOJ 12790 Mini Fantasy War
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  while(n-- > 0) {
    int inputs[8];
    for (int i = 0; i < 8; i++) {
      cin >> inputs[i];
    }

    int hp = inputs[0] + inputs[4];
    int mp = inputs[1] + inputs[5];
    int at = inputs[2] + inputs[6];
    int df = inputs[3] + inputs[7];

    cout << 1 * (max(1, hp)) + 5 * (max(1, mp)) + 2 * (max(0, at)) + 2 * (df) << '\n';
  }
}

/*
1
0 0 0 0 0 0 0 0

*/