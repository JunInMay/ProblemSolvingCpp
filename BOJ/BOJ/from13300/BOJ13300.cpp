// https://www.acmicpc.net/problem/13300 2026-02-01 BOJ 13300 방 배정
#include <iostream>
#include <cmath>

using namespace std;

int counts[2][6];

int main() {
  int n, k;
  cin >> n >> k;

  while(n-- > 0) {
    int s, y;
    cin >> s >> y;

    counts[s][y - 1]++;
  }

  int result = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 6; j++) {
      result += ceil((double) counts[i][j] / k);
    }
  }

  cout << result;
}