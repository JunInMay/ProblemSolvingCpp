// https://www.acmicpc.net/problem/21339 2025-03-08 BOJ 21339 Contest Struggles
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double n, k, d, s;
  cin >> n >> k >> d >> s;

  double result = ((n * d) - (k * s)) / (n - k);

  if (result < 0 || result > 100) {
    cout << "impossible";
    return 0;
  }
  cout << fixed << setprecision(6);
  cout << result;
}