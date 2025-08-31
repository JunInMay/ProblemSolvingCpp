// https://www.acmicpc.net/problem/13136 2025-08-31 BOJ 13136 Do Not Touch Anything
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int r, c, n;
  cin >> r >> c >> n;

  cout << (long long)ceil((double)r / n) * (long long)ceil((double)c / n);
}