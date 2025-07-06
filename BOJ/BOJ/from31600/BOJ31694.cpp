// https://www.acmicpc.net/problem/31694 2025-07-06 BOJ 31694 Kto wygrał?
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, r1 = 0, r2 = 0;
  int b1[20], b2[20];

  fill(b1, b1 + 20, 0);
  fill(b2, b2 + 20, 0);

  for (int i = 0; i < 18; i++) {
    cin >> n;
    r1 += n;
    b1[n]++;
  }

  for (int j = 0; j < 18; j++) {
    cin >> n;
    r2 += n;
    b2[n]++;
  }

  string result = "remis";
  if (r1 > r2) {
    result = "Algosia";
  } else if (r1 < r2) {
    result = "Bajtek";
  } else {
    for (int i = 10; i >= 0; i--) {
      if (b1[i] == b2[i]) continue;

      if (b1[i] > b2[i]) result = "Algosia";
      else if (b1[i] < b2[i]) result = "Bajtek";
      break;
    }
  }

  cout << result;
}