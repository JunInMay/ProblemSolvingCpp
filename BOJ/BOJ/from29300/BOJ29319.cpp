// https://www.acmicpc.net/problem/29319 2025-08-30 BOJ 29319 Начало
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long sum = 0;
  int maxer = -1;
  while (n-- > 0) {
    int nn;
    cin >> nn;

    if (nn > maxer) maxer = nn;

    sum += nn;
  }

  cout << sum - maxer;
}