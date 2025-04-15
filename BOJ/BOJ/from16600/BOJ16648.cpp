// https://www.acmicpc.net/problem/16648 2025-04-15 BOJ 16648 Accumulator Battery
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  double t, p;
  cin >> t >> p;

  double per = t / (min(100 - p, 80.0) + max(20 - p, 0.0) * 2);

  cout << per * (max(p - 20, 0.0) + min(20.0, p) * 2);
}