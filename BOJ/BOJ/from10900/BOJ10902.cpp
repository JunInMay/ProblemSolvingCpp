// https://www.acmicpc.net/problem/10902 2025-10-12 BOJ 10902 Penalty calculation
#include <iostream>

using namespace std;

int getPenalty(int t, int f) {
  return t + (f - 1) * 20;
}

int main() {
  int n;
  cin >> n;

  int penalty = 0;
  bool existedFour = false;
  for (int i = 0; i < n; i++) {
    int t, s;
    cin >> t >> s;

    if (s == 0) continue;

    if ((s == 1 && penalty == 0) || (s == 4 && !existedFour)) {
      penalty = getPenalty(t, i + 1);
      if (s == 4) existedFour = true;
    }
  }
  
  cout << penalty;
}