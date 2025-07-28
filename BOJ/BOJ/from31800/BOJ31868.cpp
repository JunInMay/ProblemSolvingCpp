// https://www.acmicpc.net/problem/31868 2025-07-28 BOJ 31868 수박 게임
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  cout << k / (long long)pow(2, n - 1);
}