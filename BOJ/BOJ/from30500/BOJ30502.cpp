// https://www.acmicpc.net/problem/30502 2025-01-28 BOJ 30502 미역은 식물 아닌데요
#include <iostream>

using namespace std;

bool ps[1001], pChecked[1001], ms[1001], mChecked[1001];

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int idx;
    char c;
    bool tf;
    cin >> idx >> c >> tf;

    if (c == 'P') {
      ps[idx] = tf;
      pChecked[idx] = true;
    } else {
      ms[idx] = tf;
      mChecked[idx] = true;
    }
  }

  int min = 0;
  int max = n;
  for (int i = 1; i <= n; i++) {
    if (pChecked[i] && mChecked[i]) {
      if (ps[i] && !ms[i]) min++;
      else if (!ps[i] || ms[i]) max--;
    } else if (pChecked[i] && !ps[i]) {
      max--;
    } else if (mChecked[i] && ms[i]) {
      max--;
    }
  }

  cout << min << " " << max;
}