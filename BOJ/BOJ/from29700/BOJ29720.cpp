// https://www.acmicpc.net/problem/29720 2025-06-29 BOJ 29720
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int least = n - (m * k);

  cout << max(0, least) << " " << max(0, least + m - 1);
}