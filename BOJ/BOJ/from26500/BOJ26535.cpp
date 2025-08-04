// https://www.acmicpc.net/problem/26535 2025-08-04 BOJ 26535 Chicken Pen
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  int side = sqrt(n);
  if ((int)sqrt(n) < sqrt(n)) side++;

  for (int i = 0; i < side + 2; i++) {
    for (int j = 0; j < side + 2; j++) {
      char print = 'x';
      if (i > 0 && j > 0 && i < side + 1 && j < side + 1) print = '.';

      cout << print;
    }
    cout << '\n';
  }
}