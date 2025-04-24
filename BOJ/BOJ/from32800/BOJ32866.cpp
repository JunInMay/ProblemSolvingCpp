// https://www.acmicpc.net/problem/32866 2025-04-24 BOJ 32866 코인의 신 건모
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double n, x;
  cin >> n >> x;
  double original = n * ((100 - x) / 100);

  cout << fixed << setprecision(6);
  cout << (n / original - 1) * 100;
}