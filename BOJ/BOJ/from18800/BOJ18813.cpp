// https://www.acmicpc.net/problem/18813 2025-05-06 BOJ 18813 Divisionals Spelling
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  bool exists[100];
  int result = 0;
  while(n-- > 0) {
    string s;
    cin >> s;

    fill(exists, exists+26, false);

    bool solvable = true;
    for (char& c : s) {
      int idx = c - 'A';

      if (idx >= m || exists[idx]) {
        solvable = false;
        break;
      }

      exists[idx] = true;
    }

    if (solvable) result++;
  }

  cout << result;
}