// https://www.acmicpc.net/problem/17950 2024-10-01 BOJ 17950 스노우볼
#include <iostream>
#include <cmath>

using namespace std;

long long mod = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  long long h, x;
  cin >> h >> x;

  long long result = 0;
  long long multiply = x;
  for (int i = 1; i <= h; i++) {
    long long n;
    cin >> n;

    result += (multiply * n);
    result %= mod;
    multiply *= x;
    multiply %= mod;
  }

  cout << result;
}