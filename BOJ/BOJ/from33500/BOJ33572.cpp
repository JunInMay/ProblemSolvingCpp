// https://www.acmicpc.net/problem/33572 2025-05-15 BOJ 33572 자세히 보아야 예쁘다
#include <iostream>

using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    long long t;
    cin >> t;

    sum += t;
  }
  sum -= n;

  string result = "OUT";
  if (m <= sum) result = "DIMI";

  cout << result << '\n';
}