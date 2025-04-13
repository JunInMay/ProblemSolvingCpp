// https://www.acmicpc.net/problem/5292 2025-04-13 BOJ 5292 Counting Swann’s Coins
#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  for (long long i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "DeadMan\n";
    } else if (i % 3 == 0) {
      cout << "Dead\n";
    } else if (i % 5 == 0) {
      cout << "Man\n";
    } else {
      cout << i << ' ';
    }
  }
}
