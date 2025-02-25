// https://www.acmicpc.net/problem/31260 2025-02-23 BOJ 31260 ПРАВОЪГЪЛНИК
#include <iostream>

using namespace std;

int main() {
  long long x, y, d;
  cin >> x >> y >> d;

  long long l = x * 100 + y;
  int first = (l - 2 * d) / 4;
  int second = first + d;

  cout << second / 100 << " " << second % 100 << '\n';
  cout << first / 100 << " " << first % 100 << '\n';
}

/*
4z + 2d = l, 4z = (l - 2d), z = (l - 2d) / 4
*/