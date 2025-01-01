// https://www.acmicpc.net/problem/5617 2025-01-01 BOJ 5617 問題 1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int r1, r2, r3, r4;

int main() {
  while (true) {
    vector<int> sides;

    int n;
    for (int i = 0; i < 3; i++) {
      cin >> n;
      sides.push_back(n);
    }

    sort(sides.begin(), sides.end(), [](int& a, int &b) {
      return a > b;
    });

    int a = sides[0];
    int b = sides[1];
    int c = sides[2];

    if (a >= b + c) break;

    r1++; // 삼각형
    if (a * a == (b * b + c * c)) r2++; // 직각
    else if (a * a < (b * b + c * c)) r3++; // 예각
    else r4++;
  }

  cout << r1 << " " << r2 << " " << r3 << " " << r4 << '\n';
}