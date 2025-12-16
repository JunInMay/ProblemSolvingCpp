// https://www.acmicpc.net/problem/9288 2025-12-16 BOJ 9288 More Dice
#include <iostream>
#include <algorithm>

using namespace std;

bool used[7];

int main() {
  int tc;
  cin >> tc;

  for(int i = 1; i <= tc; i++) {
    fill(used, used + 7, false);
    cout << "Case " << i << ":\n";

    int n;
    cin >> n;

    for(int a = 1; a <= 6; a++) {
      int b = n - a;
      if (1 <= b && b <= 6 && !used[b]) {
        used[a] = true;
        used[b] = true;

        cout << '(' << a << ',' << b << ')' << '\n';
      }
    }
  }
}