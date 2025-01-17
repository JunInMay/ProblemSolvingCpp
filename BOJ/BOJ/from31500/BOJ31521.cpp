// https://www.acmicpc.net/problem/31521 BOJ 31521 Four Die Rolls
#include <iostream>
#include <cmath>

using namespace std;

bool exists[6];

int fact(int n) {
  if (n == 1) return 1;
  return n * fact(n-1);
}

int main() {
  int n;
  cin >> n;

  bool isDuplicated = false;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;

    if (exists[d-1]) isDuplicated = true;
    exists[d-1] = true;
  }

  int a = 0;
  int b = pow(6, 4 - n);
  if (!isDuplicated) {
    a = fact(6 - n) / fact(2);
    b = b - a;
  }

  cout << a << " " << b;
}