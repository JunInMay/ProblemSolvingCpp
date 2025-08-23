// https://www.acmicpc.net/problem/33162 2025-08-23 BOJ 33162 散歩
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  cout << n * 3 - (n / 2) * 3 - (n / 2) * 2;
}