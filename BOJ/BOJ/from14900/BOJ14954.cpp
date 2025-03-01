// https://www.acmicpc.net/problem/14954 2025-02-25 BOJ 14954 Happy Number
#include <iostream>

using namespace std;

bool checked[81 * 9 + 10];

int getSum(long long ll) {
  int result = 0;
  while (ll > 0) {
    result += ((ll % 10) * (ll % 10));
    ll /= 10;
  }

  return result;
}

int main() {
  long long n;
  cin >> n;

  string result = "HAPPY";
  while (true) {
    n = getSum(n);

    if (!checked[n]) {
      checked[n] = true;
    } else {
      result = "UNHAPPY";
      break;
    }

    if (n == 1) break;
  }

  cout << result;
}