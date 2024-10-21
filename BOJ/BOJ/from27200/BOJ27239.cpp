// https://www.acmicpc.net/problem/27239 2024-10-21 BOJ 27239 Шахматная доска
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  n -= 1;
  char c = n % 8 + 'a';

  cout << c << n / 8 + 1;
}