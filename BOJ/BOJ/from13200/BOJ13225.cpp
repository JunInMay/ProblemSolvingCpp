// https://www.acmicpc.net/problem/13225 2024-09-25 BOJ 13225 Divisors
#include <iostream>
#include <cmath>

using namespace std;

int getDivisors(int n) {
  int result = 0;
  if (sqrt(n) == (int)sqrt(n)) result += 1;

  for (int i = 1; i < sqrt(n); i++) {
    if (n % i == 0) result += 2;
  }

  return result;
}

int main() {
  int n;
  cin >> n;

  while (n-- > 0) {
    int number;
    cin >> number;

    cout << number << " " << getDivisors(number) << '\n';
  }
}