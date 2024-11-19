// https://www.acmicpc.net/problem/32661 2024-11-19 BOJ 32661 Airfare Grants
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  int minNum = 1000000, maxNum = 0;
  for (int i = 0; i < tc; i++) {
    int n;
    cin >> n;

    minNum = min(n, minNum);
    maxNum = max(n, maxNum);
  }

  maxNum /= 2;

  cout << max(0, minNum - maxNum);
}