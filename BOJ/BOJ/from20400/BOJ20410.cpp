// https://www.acmicpc.net/problem/20410 2025-01-19 BOJ 20410 추첨상 사수 대작전! (Easy)
#include <iostream>

using namespace std;

int main() {
  int m, s, x1, x2;
  cin >> m >> s >> x1 >> x2;

  bool found = false;
  for (int a = 0; a <= m; a++) {
    for (int c = 0; c <= m; c++) {
      bool correct1 = x1 == (a * s + c) % m;
      bool correct2 = x2 == (a * x1 + c) % m;

      if (correct1 && correct2) {
        cout << a << " " << c;
        found = true;
        break;
      }
    }
    
    if (found) break;
  }
}