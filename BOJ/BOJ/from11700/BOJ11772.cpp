// https://www.acmicpc.net/problem/11772 2024-10-24 BOJ 11772 POT
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  long long result = 0;
  for (int i = 0; i < tc; i++) {
    int n;
    cin >> n;

    long long t = pow(n / 10, n % 10);
    result += t;
  }

  cout << result;
}