// https://www.acmicpc.net/problem/23925 2026-01-21 BOJ 23925 Retype
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  for (int i = 1; i <= t; i++) {
    int n, k, s;
    cin >> n >> k >> s;

    int result = min(k - s + n - s + k, k + n);

    cout << "Case #" << i << ": " << result << '\n';
  }
}