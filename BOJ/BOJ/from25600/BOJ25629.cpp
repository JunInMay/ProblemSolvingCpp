// https://www.acmicpc.net/problem/25629 2025-07-18 BOJ 25629 홀짝 수열
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int odd = 0, even = 0;
  while(n-- > 0) {
    int num;
    cin >> num;

    if (num % 2 == 1) odd++;
    else even++;
  }

  int result = 0;
  if (0 <= odd - even && odd - even <= 1) result = 1;
  cout << result;
}