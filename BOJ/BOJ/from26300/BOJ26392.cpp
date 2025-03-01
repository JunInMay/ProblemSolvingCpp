// https://www.acmicpc.net/problem/26392 2025-02-26 BOJ 26392 Desni klik
#include <iostream>

using namespace std;

int main() {
  int n, r, s;
  cin >> n >> r >> s;

  while(n-- > 0) {
    int max, min;
    max = -1;
    min = r + 1;
    for (int i = 0; i < r; i++) {
      string line;
      cin >> line;

      int num = r - i;

      for (int j = 0; j < s; j++) {
        char now = line[j];
        if (now == '#') {
          if (max == -1) max = num;
          min = num;
        }
      }
    }

    cout << max - min << '\n';
  }
}