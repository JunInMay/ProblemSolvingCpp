// https://www.acmicpc.net/problem/13236 2025-12-21 BOJ 13236 Collatz Conjecture
#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  cout << n << ' ';
  while(n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n * 3 + 1;
    }
    cout << n << ' ';
  }
}