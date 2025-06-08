// https://www.acmicpc.net/problem/1837 2025-06-08 BOJ 1837 암호제작
#include <iostream>
#include <algorithm>

using namespace std;

bool sieve[1100000];

int main() {
  string p;
  long long k;
  cin >> p >> k;

  fill(sieve, sieve+1100000, true);
  for (int i = 2; i < 1100000; i++) {
    if (sieve[i]) {
      for (int j = i * 2; j < 1100000; j += i) {
        sieve[j] = false;
      }
    }
  }

  bool isSafe = true;
  int min = -1;
  for (int i = 2; i < k; i++) {
    if (!sieve[i]) continue;

    long long modded = 0;
    for (int j = 0; j < p.size(); j++) {
      char c = p[j];
      modded = (modded * 10 + (c - '0')) % i;
    }
    if (modded % i == 0) {
      isSafe = false;
      min = i;
      break;
    }
  }

  if (min >= 0) cout << "BAD" << " " << min;
  else cout << "GOOD";
}