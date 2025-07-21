// https://www.acmicpc.net/problem/6721 2025-07-21 BOJ 6721 Backward numbers
#include <iostream>

using namespace std;

long long reverse(long long a) {
  int length = 0;
  long long result = 0;
  while(a != 0) {
    int digit = a % 10;
    a /= 10;
    if (digit != 0 || (digit == 0 && result != 0)) result = result * 10 + digit;
  }

  return result;
}

int main() {
  int n;
  cin >> n;

  while(n-- > 0) {
    long long a, b;
    cin >> a >> b;

    cout << reverse(reverse(a) + reverse(b)) << '\n';
  }
}
/*
4
24 1
100 1
4358 754
305 794


4
100 1
100 100
9999 9999
1234 4321
*/